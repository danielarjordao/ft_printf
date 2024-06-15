# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 12:24:30 by dramos-j          #+#    #+#              #
#    Updated: 2023/11/18 15:43:38 by dramos-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = ./Libft/libft.a
LIBFTDIR = ./Libft
SRCS = ft_printf.c ft_format.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putptr.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra	
AR = ar rc
RM = rm -rf
CP = cp

all: $(NAME)

$(NAME): $(OBJS)
	${MAKE} bonus -C ${LIBFTDIR}
	${CP} ${LIBFT} ${NAME}
	$(AR) $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	${MAKE} clean -C ${LIBFTDIR}
	$(RM) $(OBJS)

fclean: clean
	${MAKE} fclean -C ${LIBFTDIR}
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SILENT:
