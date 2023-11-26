#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 15:24:21 by bazaluga          #+#    #+#              #
#    Updated: 2023/11/26 07:46:27 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

LIBFTDIR	=	../libft

LIBFT		=	$(LIBFTDIR)/libft.so

NAME 		=	libftest

SRC	 		=	CuTest.c utils.c malloc.c

MALLOC		=	malloc.c

LMALLOC		=	malloc.so

NORMAL		=	allTests.c

STATIC		=	staticAllTests.c

OBJN 		=	CuTest.o allTests.o malloc.o utils.o

OBJS		=	CuTest.o staticAllTests.o malloc.o utils.o

CC	 		=	cc

CFLAGS		=	-Wall -Wextra -Werror -g

# INCLUDES	=	-L../libft -lft
INCLUDES	=

ifneq ($(shell uname), Darwin)
	INCLUDES += -lbsd
endif

all:		$(NAME)

run:		$(NAME)
			./$(NAME)
# 			LD_PRELOAD=./$(LMALLOC) ./$(NAME)

$(LIBFT):
			make so -C $(LIBFTDIR)
			cp $(LIBFT) ./

# .c.o:
			# $(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# $(LMALLOC):
# 			gcc -shared -fPIC -o $< $(MALLOC) -ldl

$(NAME):	$(LIBFT) $(SRC) $(NORMAL)
			$(CC) $(CFLAGS) $(SRC) $(NORMAL) $(LIBFT) $(INCLUDES) -o $(NAME)

static:		$(LIBFT) $(SRC) $(STATIC)
			$(CC) $(CFLAGS) $(SRC) $(STATIC) $(LIBFT) $(INCLUDES) -o $(NAME)

clean:
			rm -f $(NAME) $(OBJN) $(OBJS) $(LMALLOC) ./libft.so

fclean:		clean

force:
			make re -C $(LIBFTDIR)
			make so -C $(LIBFTDIR)

re:			clean force all

.PHONY:		all clean $(LIBFT) force fclean static run
