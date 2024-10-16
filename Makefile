# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 11:20:11 by mszlicht          #+#    #+#              #
#    Updated: 2024/04/05 11:44:53 by mszlicht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC	= cc

CFLAGS	= -Wall -Werror -Wextra

SRCS	=	ft_printf.c\
		ft_print_c.c\
		ft_print_s.c\
		ft_print_d.c\
		ft_print_u.c\
		ft_print_p.c\
		ft_print_hex.c\

OBJS	= $(SRCS:.c=.o)

HEADER	= ./

all:	$(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re : fclean all

.PHONY: all, clean, fclean, re
