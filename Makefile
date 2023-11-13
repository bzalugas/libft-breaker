#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 15:24:21 by bazaluga          #+#    #+#              #
#    Updated: 2023/11/13 19:46:54 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

LIBFT	=	../libft/libft.a

NAME 	=	libftest

SRC	 	=	CuTest.c

NORMAL	=	allTests.c

STATIC	=	staticAllTests.c

OBJN 	=	CuTest.o allTests.o

OBJS	=	CuTest.o staticAllTests.o

CC	 	=	cc

CFLAGS	=	-Wall -Wextra -Werror

INCLUDES	=	-L../libft -lft

ifneq ($(shell uname), Darwin)
	INCLUDES += -lbsd
endif

all:		$(NAME)
			./$(NAME)

$(LIBFT):
			make -C ../libft

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(LIBFT) $(OBJN)
			$(CC) $(CFLAGS) $(OBJN) -o $(NAME) $(INCLUDES)

static:		$(LIBFT) $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(INCLUDES)
			./$(NAME)

clean:
			rm -f $(NAME) $(OBJN) $(OBJS)

fclean:		clean

force:
			make re -C ../libft

re:			clean force all

.PHONY:		all clean $(LIBFT) force fclean static
