#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 15:24:21 by bazaluga          #+#    #+#              #
#    Updated: 2023/11/21 12:52:37 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

LIBFT	=	../libft/libft.a

NAME 	=	libftest

SRC	 	=	CuTest.c utils.c

MALLOC	=	malloc.c

LMALLOC	=	malloc.so

NORMAL	=	allTests.c

STATIC	=	staticAllTests.c

OBJN 	=	CuTest.o allTests.o malloc.o utils.o

OBJS	=	CuTest.o staticAllTests.o malloc.o utils.o

CC	 	=	cc

CFLAGS	=	-Wall -Wextra -Werror -g

INCLUDES	=	-L../libft -lft

ifneq ($(shell uname), Darwin)
	INCLUDES += -lbsd
endif

all:		$(NAME)

run:		$(NAME)
			./$(NAME)
# 			LD_PRELOAD=./$(LMALLOC) ./$(NAME)

$(LIBFT):
			make -C ../libft

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# $(LMALLOC):
# 			gcc -shared -fPIC -o $< $(MALLOC) -ldl

$(NAME):	$(LIBFT) $(OBJN)
			$(CC) $(CFLAGS) $(OBJN) -o $(NAME) $(INCLUDES)

static:		$(LIBFT) $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(INCLUDES)
			./$(NAME)

clean:
			rm -f $(NAME) $(OBJN) $(OBJS) $(LMALLOC)

fclean:		clean

force:
			make re -C ../libft

re:			clean force all

.PHONY:		all clean $(LIBFT) force fclean static run
