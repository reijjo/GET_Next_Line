/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leakit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taitomer <taitomer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:30:54 by taitomer          #+#    #+#             */
/*   Updated: 2022/05/03 14:36:43 by taitomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd = open("testit/etitaanleakit.txt", O_RDONLY);
	int		linelen = 0;
	//char	buf[BUFF_SIZE + 1];
	char	*line = NULL;

	while ((linelen = get_next_line(fd, &line) > 0))
	{
		printf("%s\n", line);
	}
	return (0);
}
