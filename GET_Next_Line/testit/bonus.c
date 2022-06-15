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

int	main(void)
{
	//int		fd = 1;
	int		fd1 = open("advancedtests", O_RDONLY);
	int		fd2 = open("test1", O_RDONLY);
	int		fd3 = open("test2", O_RDONLY);
	char	*line;
	
	printf(CYAN"\n--- FD1 ---\n"RESET);
	printf(GREEN"--- FD2 ---\n"RESET);
	printf(MAGENTA"--- FD3 ---\n\n\n"RESET);

	get_next_line(fd1, &line);
	printf(CYAN"FD1 line1: %s", line);
	if (strcmp(line, "eka!") == 0)
		printf(GREEN"			--OK!\n"RESET);
	else
		printf(RED"				--WHAT?\n"RESET);
	get_next_line(fd1, &line);
	printf(CYAN"FD1 line2: %s", line);
	if (strcmp("1234", line) == 0)
		printf(GREEN"			--OK!\n\n"RESET);
	else
		printf(RED"				--WHATWHAT?\n\n"RESET);
	
	get_next_line(fd2, &line);
	printf(GREEN"FD2 line1: %s", line);
	if (strcmp(line, "Moi") == 0)
		printf(GREEN"			--OK!\n"RESET);
	else
		printf(RED"		--WHAT?\n"RESET);
	get_next_line(fd2, &line);
	printf(GREEN"FD2 line2: %s", line);
	if (strcmp(line, "jeeeee") == 0)
		printf(GREEN"		--OK!\n\n"RESET);
	else
		printf(RED"		--WHAT?\n\n"RESET);
	
	get_next_line(fd3, &line);
	printf(MAGENTA"FD3 line1: %s", line);
	if (strcmp(line, "EKAAAAAAAAA") == 0)
		printf(GREEN"		--OK!\n"RESET);
	else
		printf(RED"		--WHAT?\n"RESET);
	get_next_line(fd3, &line);
	printf(MAGENTA"FD3 line2: %s", line);
	if (strcmp(line, "JUONTAJA NAYTA") == 0)
		printf(GREEN"	--OK!\n\n"RESET);
	else
		printf(RED"	--WHAT?\n\n"RESET);
	
	get_next_line(fd1, &line);
	printf(CYAN"FD1 line3: %s", line);
	if (strcmp(line, "misu") == 0)
		printf(GREEN"			--OK!\n\n"RESET);
	else
		printf(RED"			--WHAT?\n\n"RESET);	

	get_next_line(fd3, &line);
	printf(MAGENTA"FD3 line3: %s", line);
	if (strcmp(line, "tjtjtjtjtjtjtjtj") == 0)
		printf(GREEN"	--OK!\n\n"RESET);
	else
		printf(RED"	--WHAT?\n\n"RESET);

	get_next_line(fd2, &line);
	printf(GREEN"FD2 line3: %s", line);
	if (strcmp("WOOWOWOWOWOWOWOWO", line) == 0)
		printf("	--OK!\n\n");
	else
		printf(RED"		--WHATWHAT??\n\n"RESET);

	get_next_line(fd1, &line);
	printf(CYAN"FD1 line4: %s", line);
	if (strcmp("kisu", line) == 0)
		printf(GREEN"			--OK!\n"RESET);
	else
		printf(RED"			--WHATWHAT??\n"RESET);	
	get_next_line(fd1, &line);
	printf(CYAN"FD1 line5: %s", line);
	if (strcmp("joo!", line) == 0)
		printf(GREEN"			--OK!\n\n"RESET);
	else
		printf(RED"			--WHATWHAT??\n\n"RESET);

	get_next_line(fd3, &line);
	printf(MAGENTA"FD3 line4: %s", line);
	if (strcmp("toimitusjohtaja", line) == 0)
		printf(GREEN"	--OK!\n"RESET);
	else
		printf(RED"		--WHATWHAT??\n\n"RESET);
	
	get_next_line(fd2, &line);
	printf(GREEN"FD2 line4: %s", line);
	if (strcmp("4. rivi", line) == 0)
		printf(GREEN"		--OK!"RESET);
	else
		printf(RED"		--WHATWHAT??\n\n"RESET);

	close(fd1);
	close(fd2);
	close(fd3);
	system("leaks test_gnl");
	return (0);
}
