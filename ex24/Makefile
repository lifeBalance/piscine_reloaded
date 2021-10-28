# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 11:57:42 by rodrodri          #+#    #+#              #
#    Updated: 2021/10/28 12:18:44 by rodrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

FLAGS =	-Wall -Werror -Wextra

SRCS =	srcs/ft_putchar.c\
		srcs/ft_putstr.c\
		srcs/ft_strcmp.c\
		srcs/ft_strlen.c\
		srcs/ft_swap.c

OBJS =	ft_putchar.o\
		ft_putstr.o\
		ft_strcmp.o\
		ft_strlen.o\
		ft_swap.o

HDRS =	includes

.PHONY:	all clean fclean re

all:	$(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS) -I $(HDRS) -c
	ar rcs $(NAME) $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean:	clean
	/bin/rm -f $(NAME)

re:	fclean all
