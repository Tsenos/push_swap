# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/12 15:32:41 by tifavre           #+#    #+#              #
#    Updated: 2024/05/12 18:10:30 by tifavre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ./libft/libft.a

SRCS =	push_swap.c			\
		push_swap_utils.c	\
		check_args.c		\

NAME = push_swap
OBJS = ${SRCS:.c=.o}

CC = gcc
CC_FLAGS = -Wall -Werror -Wextra

RM = rm -f

COLOR_BLUE=\033[0;35m
COLOR_END=\033[0m

%.o:		%.c
			@${CC} ${CC_FLAGS} -c $<

${NAME}:	${OBJS}
			@make all -C ./libft
			@${CC} ${CC_FLAGS} ${OBJS} ${LIBFT} -o $@
			@echo "$(COLOR_BLUE)push_swap$'\tcreated$(COLOR_END)"

all:		${NAME}

clean:
			@make fclean -C ./libft
			@${RM} ${OBJS}
			@echo "$(COLOR_BLUE)push_swap$'\tcleaned$(COLOR_END)"

fclean:		clean
			@${RM} ${NAME}
			@echo "$(COLOR_BLUE)push_swap$'\tfcleaned$(COLOR_END)"

re:			fclean all

.PHONY: all clean fclean re