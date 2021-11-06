/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:17:43 by lluciano          #+#    #+#             */
/*   Updated: 2021/11/06 15:26:45 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_saveafter(char *str)
{
	printf("Dentro do saveafter");
	while (*str != '\n')
		str++;
	str++;
	return (str);
}

char	*ft_reader(char *readline, int fd)
{
	int		readsize;
	char	*buff;

	if (readline == 0)
	{
		buff = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
		if (!buff)
		{
			free(buff);
			return (0);
		}
		readsize = read(fd, buff, BUFFER_SIZE);
		if (readsize < 0)
		{
			free(buff);
			return (0);
		}
	}
	while (!ft_strchr(buff, '\0'))
	{
		if (ft_strchr(buff, '\n'))
			readline = ft_saveafter(buff);
	}
	return (buff);
}

char	*get_next_line(int fd)
{
	static char	*line_read;

	if (fd < 0)
		return (0);
	line_read = ft_reader(line_read, fd);
	printf("\n1- Printf aqui:\n%s\n---\n", line_read);
	line_read = ft_reader(line_read, fd);
	printf("\n2- Printf aqui:\n%s\n---\n", line_read);
	return (line_read);
}

int	main(void)
{
	int	fd;

	fd = open("teste.txt", O_RDONLY);
	get_next_line(fd);
	return (0);
}
