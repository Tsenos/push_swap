# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 11:42:00 by tifavre           #+#    #+#              #
#    Updated: 2024/05/13 11:58:49 by tifavre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_strlen.c		\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strncmp.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strnstr.c	\
			ft_atoi.c		\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_striteri.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_printf.c		\
			ft_printf_utils1.c	\
			ft_printf_utils2.c


OBJS	=	${SRCS:.c=.o}
CC		=	gcc
CCFLAGS	=	-Wall -Werror -Wextra
NAME	= 	libft.a
ARRCS	=	ar -rcs
RM		=	rm -f

COLOR_GREEN=\033[0;32m
COLOR_END=\033[0m

%.o: %.c
	@${CC} ${CCFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	@${ARRCS} ${NAME} ${OBJS}
	@echo "$(COLOR_GREEN)libft.a$'\t$'\tcreated$(COLOR_END)"

clean:
	@${RM} ${OBJS}
	@echo "$(COLOR_GREEN)libft.a$'\t$'\tcleaned$(COLOR_END)"

fclean: clean
	@${RM} ${NAME}
	@echo "$(COLOR_GREEN)libft.a$'\t$'\tfcleaned$(COLOR_END)"
	
re: fclean all

.PHONY: all bonus clean fclean re
