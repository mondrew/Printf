# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mondrew <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/17 14:21:35 by mondrew           #+#    #+#              #
#    Updated: 2020/05/20 19:13:26 by mondrew          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ./srcs/ft_analyze_that.c \
	   ./srcs/ft_atoi.c \
	   ./srcs/ft_char_to_str.c \
	   ./srcs/ft_check_precision_num.c \
	   ./srcs/ft_check_precision_str.c \
	   ./srcs/ft_count_digits.c \
	   ./srcs/ft_count_power.c \
	   ./srcs/ft_create_str.c \
	   ./srcs/ft_dtoh.c \
	   ./srcs/ft_dtoh_ptr.c \
	   ./srcs/ft_iterative_power.c \
	   ./srcs/ft_ltoa.c \
	   ./srcs/ft_min_field_width.c \
	   ./srcs/ft_minus_null.c \
	   ./srcs/ft_precision.c \
	   ./srcs/ft_print_count_num.c \
	   ./srcs/ft_print_count_str.c \
	   ./srcs/ft_print_null.c \
	   ./srcs/ft_printf.c \
	   ./srcs/ft_putchar_fd.c \
	   ./srcs/ft_putstr_fd.c \
	   ./srcs/ft_strdup.c \
	   ./srcs/ft_strlen.c \
	   ./srcs/ft_substr.c

FLAGS = -Wall -Werror -Wextra
INCLUDES = ./includes
HEADER = ./includes/libftprintf.h

OBJECTS = $(SRCS:.c=.o) 

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

%.o: %.c $(HEADER)
	@gcc $(FLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
