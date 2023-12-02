#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 15:24:21 by bazaluga          #+#    #+#              #
#    Updated: 2023/12/03 00:49:27 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#


################################### VARIABLES ##################################

LIBFTDIR	=	../libft

LIBFT		=	$(LIBFTDIR)/libft.so

LIBFTSO		=	obj/libft.so

NAME 		=	run-breaker

SRCN 		=	src/allTests.c src/CuTest.c src/utils.c

SRCS 		=	src/staticAllTests.c src/CuTest.c src/utils.c

MALLOC		=	src/malloc.c

LMALLOC		=	obj/libmalloc.so

CC	 		=	cc

CFLAGS		=	-Wall -Wextra -Werror

ifeq ($(shell uname), Darwin)
	MACOS = 1
	LIBFLAGS = -dynamiclib
else
	CFLAGS += -lbsd
	LIBFLAGS = -shared -nostartfiles -fPIC -ldl
endif

ANSI_COLOR_RED		=	"\033[31m"
ANSI_COLOR_GREEN	=	"\033[32m"
ANSI_COLOR_RESET	=	"\033[0m"

##################################### RULES #####################################

all:		$(NAME)

$(NAME):	$(LMALLOC) $(LIBFTSO) $(SRCN)
			$(CC) $(CFLAGS) -o $@ $(SRCN) -Lobj -lmalloc

static:		$(LMALLOC) $(LIBFTSO) $(SRCS)
			$(CC) $(CFLAGS) -o $(NAME) $(SRCS) -Lobj -lmalloc

run:		$(NAME)
			./$(NAME) $(filter-out $@, $(MAKECMDGOALS))

srun:		static
			./$(NAME) $(filter-out $@, $(MAKECMDGOALS))

$(LMALLOC):	$(MALLOC)
			mkdir -p obj
			$(CC) $(LIBFLAGS) -o $@ $<

$(LIBFTSO):	$(LIBFTDIR)
			rm -rf libft/*
			mkdir -p libft
			cp $(LIBFTDIR)/* ./libft
			make -C libft/ so
			mv libft/libft.so $(LIBFTSO)


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

.PHONY:		all clean force fclean static run srun $(LIBFTSO)
