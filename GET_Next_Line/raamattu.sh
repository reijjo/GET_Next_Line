#!/bin/bash
make -C libft/ fclean && make -C libft/
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -I libft/includes -o raamattu.o -c raamattu.c
clang -o test_gnl raamattu.o get_next_line.o -I libft/includes -L libft/ -lft
make -C libft/ clean
rm -f *.o
./test_gnl
