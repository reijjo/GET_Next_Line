# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 10:51:03 by taitomer          #+#    #+#              #
#    Updated: 2021/12/07 10:56:49 by taitomer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a

FLAGS = -Wall -Werror -Wextra

FILES = get_next_line.c \
		./libft/*.c \

OBJ = *.o

HEADER = get_next_line.h

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(FILES)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f a.out

re: fclean all
