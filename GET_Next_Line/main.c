/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virallinen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 13:38:53 by taitomer          #+#    #+#             */
/*   Updated: 2021/12/19 14:56:52 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

int	main(int argc, char *argv[])
{
	int		fd = 1;
	int		fd1 = open(argv[1], O_RDONLY);
	int		ret;
	char	*line;
	argc = 1;
	//int		linelen;

	printf(YELLOW"	STDOUTtest:\n"RESET);
	printf("type:	\n");
	ret = get_next_line(fd, &line);
	if (strcmp(line, line) == 0 /*&& strlen(line) == 8*/)
		printf(GREEN"%s				--OK!!\n"RESET, line);
	else
		printf(RED"Jotain vikaa?!\n"RESET);

	printf(YELLOW"\n	Chars from file:\n"RESET);
	ret = get_next_line(fd1, &line);
	printf("FD1 line1: ");
	if (strcmp("eka!", line) == 0)
		printf(GREEN"%s			--OK!!\n"RESET, line);
	else
		printf(RED"%s			--WHATWHAT??\n"RESET, line);

	printf(CYAN"\n2 lines, chars from file:\n"RESET);
	printf("FD1 line1: ");
	if (strcmp("eka!", line) == 0)
		printf(GREEN"%s			--OK!!\n"RESET, line);
	else
		printf(RED"%s			--WHATWHAT??\n"RESET, line);
	get_next_line(fd1, &line);
	printf("FD1 line2: ");
	if (strcmp("1234", line) == 0)
		printf(GREEN"%s			--OK!!\n"RESET, line);
	else
		printf(RED"%s			--WHATWHAT??\n"RESET, line);

	printf(CYAN"\nrest of the lines:\n"RESET);
	//while ((linelen = get_next_line(fd1, &line)) > 0)
	//{
		get_next_line(fd1, &line);
		if (strcmp("misu", line) == 0)
			printf(GREEN"%s				--OK!!\n"RESET, line);
		else
			printf(RED"%s				--WHATWHAT??\n"RESET, line);
		get_next_line(fd1, &line);
		if (strcmp("kisu", line) == 0)
			printf(GREEN"%s				--OK!!\n"RESET, line);
		else
			printf(RED"%s				--WHATWHAT??\n"RESET, line);
		get_next_line(fd1, &line);
		if (strcmp("joo!", line) == 0)
			printf(GREEN"%s				--OK!!\n"RESET, line);
		else
			printf(RED"%s				--WHATWHAT??\n"RESET, line);
		get_next_line(fd1, &line);
		if (strcmp("vika", line) == 0)
			printf(GREEN"%s				--OK!!\n"RESET, line);
		else
			printf(RED"%s				--WHATWHAT??\n"RESET, line);
		get_next_line(fd1, &line);
		if (strcmp( "SEURAAVANA TYHJA RIVI", line) == 0)
			printf(GREEN"%s		--OK!!\n"RESET, line);
		else
			printf(RED"%s				--WHATWHAT??\n"RESET, line);
		get_next_line(fd1, &line);
		if (strcmp("", line) == 0)
			printf(GREEN"%s				--OK!!\n"RESET, line);
		else
			printf(RED"%s				--WHATWHAT??\n"RESET, line);
		get_next_line(fd1, &line);
		if (strcmp("TADAA!", line) == 0)
			printf(GREEN"%s				--OK!!\n"RESET, line);
		else
			printf(RED"%s				--WHATWHAT??\n"RESET, line);
		get_next_line(fd1, &line);
		if (strcmp("16merkkiailman\\n", line) == 0)
			printf(GREEN"%s		--OK!!\n"RESET, line);
		else
			printf(RED"%s				--WHATWHAT??\n"RESET, line);

	printf(YELLOW"\n	ERRORS:\n"RESET);
	printf(CYAN"Arbitary file descriptor? "RESET);
	if (get_next_line(42, &line) == -1)
		printf(GREEN"	--OK!!\n\n"RESET);
	else
		printf(RED"Joku ERROR!\n\n"RESET);

	close(fd);
	system("leaks test_gnl");
	return (0);
}
