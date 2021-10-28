# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 11:57:42 by rodrodri          #+#    #+#              #
#    Updated: 2021/10/28 21:50:20 by rodrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_display_file

FLAGS =	-Wall -Werror -Wextra

SRC =	ft_display_file.c

OBJ =	ft_display_file.o

.PHONY:	all clean fclean re

all:	$(NAME)

$(NAME):	$(SRC)
	gcc $(FLAGS) $(SRC) -c
	gcc $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean:	clean
	/bin/rm -f $(NAME)

re:	fclean all
