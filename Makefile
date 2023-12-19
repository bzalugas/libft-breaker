#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 15:24:21 by bazaluga          #+#    #+#              #
#    Updated: 2023/12/19 13:52:29 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

################################### VARIABLES ##################################

LIBFTDIR	=	../libft

LIBFT		=	$(LIBFTDIR)/libft.so

LIBFTSO		=	obj/libft.so

LIBFTRULE	=	breaker

LIBFTSRCS	=	$(wildcard $(LIBFTDIR)/*.c)

NAME 		=	run-breaker

SRCN 		=	src/allTests.c src/CuTest.c src/utils.c

SRCS 		=	src/staticAllTests.c src/CuTest.c src/utils.c

MALLOC		=	src/malloc.c

LMALLOC		=	obj/libmalloc.so

CC	 		=	cc

CFLAGS		=	-Wall -Wextra -Werror -g

ifeq ($(shell uname), Darwin)
	MACOS = 1
	LIBINCLUDES = -Lobj -lmalloc
	LIBFLAGS = -dynamiclib
else
	LIBINCLUDES = $(LMALLOC) -lbsd
	LIBFLAGS = -shared -nostartfiles -fPIC -ldl
endif

ANSI_COLOR_RED		=	"\033[31m"
ANSI_COLOR_GREEN	=	"\033[32m"
ANSI_COLOR_RESET	=	"\033[0m"

##################################### RULES #####################################

all:		$(NAME)

$(NAME):	$(LMALLOC) $(LIBFTSO) $(SRCN)
			$(CC) $(CFLAGS) -o $@ $(SRCN) $(LIBINCLUDES)

static:		$(LMALLOC) $(LIBFTSO) $(SRCS)
			$(CC) $(CFLAGS) -o $(NAME) $(SRCS) $(LIBINCLUDES)

run:		$(NAME)
			./$(NAME) $(filter-out $@, $(MAKECMDGOALS))

srun:		static
			./$(NAME) $(filter-out $@, $(MAKECMDGOALS))

norm:
			@echo $(shell bash ./src/check_norm.sh)

$(LMALLOC):	$(MALLOC)
			mkdir -p obj
			$(CC) $(LIBFLAGS) -o $@ $<

ifdef MACOS
$(LIBFTSO):	$(LIBFTDIR)
			rm -rf libft/*
			mkdir -p libft
			cp $(LIBFTDIR)/* ./libft
			make -C libft/ $(LIBFTRULE)
			mv libft/libft.so $(LIBFTSO)
else
$(LIBFTSO):	$(LIBFTDIR)
			make -C $(LIBFTDIR) $(LIBFTRULE)
			cp $(LIBFT) $(LIBFTSO)
endif

$(LIBFTDIR):
			@echo $(ANSI_COLOR_RED)\
				PLEASE PROVIDE THE CORRECT PATH TO YOUR LIBFT\
				$(ANSI_COLOR_RESET)
			@false

%:
	@true

clean:
			rm -f $(NAME) $(SRCN:.c=.o) $(SRCS:.c=.o)

fclean:		clean
			rm -rf obj libft

re:			fclean all

.PHONY:		all clean force fclean static run srun $(LIBFTSO) norm
