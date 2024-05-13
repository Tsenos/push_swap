# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/12 15:32:41 by tifavre           #+#    #+#              #
#    Updated: 2024/05/13 11:59:32 by tifavre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ./libft/libft.a

SRCS =	push_swap.c				\
		push_swap_utils.c		\
		check_args.c			\
		ft_lstnew_bonus.c		\
		ft_lstadd_front_bonus.c	\
		ft_lstsize_bonus.c		\
		ft_lstlast_bonus.c		\
		ft_lstadd_back_bonus.c	\
		ft_lstdelone_bonus.c	\
		ft_lstclear_bonus.c		\
		ft_lstiter_bonus.c		\
		ft_lstmap_bonus.c

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