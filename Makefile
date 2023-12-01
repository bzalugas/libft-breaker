#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 15:24:21 by bazaluga          #+#    #+#              #
#    Updated: 2023/12/01 19:27:44 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

LIBFTDIR	=	../libft

LIB			=	obj/libft.so

LIBFT		=	$(LIBFTDIR)/$(LIB)

NAME 		=	libftest

SRC	 		=	src/CuTest.c src/utils.c

MALLOC		=	src/malloc.c

LMALLOC		=	obj/libmalloc.dylib

NORMAL		=	src/allTests.c

STATIC		=	src/staticAllTests.c

CC	 		=	cc

CFLAGS		=	-Wall -Wextra -Werror

LIBFLAGS	=

INCLUDES	=

MACOS		=

ifneq ($(shell uname), Darwin)
	INCLUDES += -lbsd
	LIBFLAGS += -nostartfiles -fPIC -ldl
else
	LIBFLAGS += -dynamiclib
	MACOS = 1
endif

all:		$(NAME)

run:		$(NAME)
			./$(NAME) $(filter-out $@, $(MAKECMDGOALS))

srun:		static
			./$(NAME) $(filter-out $@, $(MAKECMDGOALS))

ifdef MACOS
$(LIB):		$(LMALLOC)
			rm -rf ./libft/*
			mkdir -p libft
			cp -r $(LIBFTDIR)/* ./libft
			cp $(LMALLOC) ./libft
			make -C ./libft so
			cp ./libft/libft.so ./
else
$(LIB):
			rm -rf ./obj/*
			mkdir -p ./obj
			make -C $(LIBFTDIR) so
			cp $(LIBFT) ./obj
endif

$(LMALLOC):	$(MALLOC)
			$(CC) $(LIBFLAGS) -o $@ $(MALLOC) $(SRC) $(NORMAL) src/globals.c

$(NAME):	$(LMALLOC) $(LIB) $(SRC) $(NORMAL)
			$(CC) $(CFLAGS) $(SRC) $(NORMAL) $(INCLUDES) -o $(NAME) -Lobj -lmalloc

static:		$(LMALLOC) $(LIB) $(SRC) $(STATIC)
			$(CC) $(CFLAGS) $(SRC) $(STATIC) $(INCLUDES) -o $(NAME) -Lobj -lmalloc

clean:
			rm -f $(NAME) $(SRC:.c=.o) $(NORMAL:.c=.o) $(STATIC:.c=.o) $(LMALLOC) $(LIB) $(LMALLOC)

fclean:		clean

re:			fclean all

.PHONY:		all clean $(LIBFT) force fclean static run srun static
