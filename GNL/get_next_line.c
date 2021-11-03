/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:17:43 by lluciano          #+#    #+#             */
/*   Updated: 2021/11/03 10:38:53 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd)
{
	char	*str;

	read(fd, str, 50);
	printf("after read: %s\n", (str));
}

int	main(void)
{
	int	fd;

	fd = open("teste.txt", O_RDONLY);
	printf("file descriptor: %d\n", (fd));
	get_next_line(fd);
	return (0);
}
