#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 15:24:21 by bazaluga          #+#    #+#              #
#    Updated: 2026/05/28 21:59:06 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

################################### VARIABLES ##################################

LIBFTDIR	=	../libft

LIBFT		=	$(LIBFTDIR)/libft.so

LIBFTSO		=	obj/libft.so

LIBFTRULE	=	breaker

NAME 		=	run-breaker

SRCN 		=	src/allTests.c src/run_all.c src/CuTest.c src/utils.c

SRCS 		=	src/staticAllTests.c src/run_all.c src/CuTest.c src/utils.c

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

RED		=	\033[31m
GREEN	=	\033[32m
RESET	=	\033[0m

##################################### RULES #####################################

.DEFAULT_GOAL	=	all

help:
			@printf "%b\n" "$(GREEN)Available rules:$(RESET)"
			@echo "  all      Build $(NAME) with libc comparison tests"
			@echo "  static   Build $(NAME) with static expected-value tests"
			@echo "  run      Build and run tests; optional: make run ft_strlen"
			@echo "  srun     Build static tests and run them; optional: make srun ft_strlen"
			@echo "  clean    Remove the test executable"
			@echo "  fclean   Remove generated objects, copied libraries, and executable"
			@echo "  re       Rebuild from scratch"
			@echo "  help     Display this help"
			@echo "  F = subject-required failure, U = undefined behavior edge case"

all:		$(NAME)

$(NAME):	$(LMALLOC) $(LIBFTSO) $(SRCN)
			@printf "%b\n" "$(GREEN)Building $(NAME) with libc comparison tests...$(RESET)"
			@$(CC) $(CFLAGS) -o $@ $(SRCN) $(LIBINCLUDES)

static:		$(LMALLOC) $(LIBFTSO) $(SRCS)
			@printf "%b\n" "$(GREEN)Building $(NAME) with static expected-value tests...$(RESET)"
			@$(CC) $(CFLAGS) -o $(NAME) $(SRCS) $(LIBINCLUDES)

run:		$(NAME)
			@printf "%b\n" "$(GREEN)Running tests...$(RESET)"
			@./$(NAME) $(filter-out $@, $(MAKECMDGOALS))

srun:		static
			@printf "%b\n" "$(GREEN)Running static tests...$(RESET)"
			@./$(NAME) $(filter-out $@, $(MAKECMDGOALS))

$(LMALLOC):	$(MALLOC)
			@printf "%b\n" "$(GREEN)Building malloc wrapper...$(RESET)"
			@mkdir -p obj
			@$(CC) $(LIBFLAGS) -o $@ $<

ifdef MACOS
$(LIBFTSO):	$(LIBFTDIR)
			@printf "%b\n" "$(GREEN)Building libft shared library...$(RESET)"
			@rm -rf libft/*
			@mkdir -p libft
			@cp $(LIBFTDIR)/* ./libft
			@$(MAKE) -s -C libft/ $(LIBFTRULE)
			@mv libft/libft.so $(LIBFTSO)
else
$(LIBFTSO):	$(LIBFTDIR)
			@printf "%b\n" "$(GREEN)Building libft shared library...$(RESET)"
			@$(MAKE) -s -C $(LIBFTDIR) $(LIBFTRULE)
			@cp $(LIBFT) $(LIBFTSO)
endif

$(LIBFTDIR):
			@printf "%b\n" "$(RED)PLEASE PROVIDE THE CORRECT PATH TO YOUR LIBFT$(RESET)"
			@false

%:
	@true

clean:
			@printf "%b\n" "$(GREEN)Cleaning executable...$(RESET)"
			@rm -f $(NAME) $(SRCN:.c=.o) $(SRCS:.c=.o)

fclean:		clean
			@printf "%b\n" "$(GREEN)Cleaning generated libraries...$(RESET)"
			@rm -rf obj libft

re:			fclean all

.PHONY:		all clean force fclean static run srun help $(LIBFTSO)
