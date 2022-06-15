#!/bin/bash
make -C libft/ fclean && make -C libft/
clang -Wall -Wextra -Werror -g -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -g -I libft/includes -o leakit.o -c leakit.c
clang -o test_gnl leakit.o get_next_line.o -I libft/includes -L libft/ -lft
make -C libft/ clean
rm -f *.o
./test_gnl
