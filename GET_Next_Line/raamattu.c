/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raamattu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:56:30 by taitomer          #+#    #+#             */
/*   Updated: 2022/05/03 14:18:10 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd = open("testit/bible.txt", O_RDONLY);
	int		linelen = 0;
	//char	buf[BUFF_SIZE + 1];
	char	*line = NULL;

	while ((linelen = get_next_line(fd, &line) > 0))
	{
		printf("%s\n", line);
	}
	system("leaks test_gnl");
	return (0);
}
