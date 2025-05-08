# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/05 09:01:15 by bgazur            #+#    #+#              #
#    Updated: 2025/05/07 16:51:02 by bgazur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
OBJS = $(SRCS:.c=.o)
SRCS = ft_printf.c ft_putchar.c ft_putnbr_p.c ft_putnbr_s.c ft_putnbr_u.c
SRCS += ft_putstr.c ft_strlen.c

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME)
	./a.out

.PHONY: all clean fclean re
