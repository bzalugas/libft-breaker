#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 15:24:21 by bazaluga          #+#    #+#              #
#    Updated: 2023/11/27 09:58:21 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

LIBFTDIR	=	../libft

LIB			=	libft.so

LIBFT		=	$(LIBFTDIR)/$(LIB)

NAME 		=	libftest

SRC	 		=	CuTest.c utils.c malloc.c

MALLOC		=	malloc.c

LMALLOC		=	malloc.so

NORMAL		=	allTests.c

STATIC		=	staticAllTests.c

CC	 		=	cc

CFLAGS		=	-Wall -Wextra -Werror -g

INCLUDES	=

ifneq ($(shell uname), Darwin)
	INCLUDES += -lbsd
endif

all:		$(NAME)

run:		$(NAME)
			./$(NAME) $(filter-out $@, $(MAKECMDGOALS))

srun:		static
			./$(NAME) $(filter-out $@, $(MAKECMDGOALS))

$(LIBFT):
			make -C $(LIBFTDIR) so

$(LIB):		$(LIBFT)
			cp $(LIBFT) ./

$(NAME):	$(LIB) $(SRC) $(NORMAL)
			$(CC) $(CFLAGS) $(SRC) $(NORMAL) $(INCLUDES) -o $(NAME)

static:		$(LIB) $(SRC) $(STATIC)
			$(CC) $(CFLAGS) $(SRC) $(STATIC) $(INCLUDES) -o $(NAME)

clean:
			rm -f $(NAME) $(OBJN) $(OBJS) $(LMALLOC) ./libft.so

fclean:		clean

force:
			make re -C $(LIBFTDIR)
			make so -C $(LIBFTDIR)

re:			clean force all

.PHONY:		all clean $(LIBFT) force fclean static run
