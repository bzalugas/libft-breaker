#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 15:24:21 by bazaluga          #+#    #+#              #
#    Updated: 2023/11/09 15:21:33 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

LIBFT	=	../libft/libft.a

NAME 	=	libftest

SRC	 	=	CuTest.c allTests.c

OBJ	 	=	$(SRC:.c=.o)

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

$(NAME):	$(LIBFT) $(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(INCLUDES)

clean:
			rm -f $(NAME) $(OBJ)

fclean:		clean

force:
			make re -C ../libft

re:			clean force all

.PHONY:		all clean $(LIBFT) force fclean
