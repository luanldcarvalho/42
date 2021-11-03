/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:17:43 by lluciano          #+#    #+#             */
/*   Updated: 2021/11/03 16:34:35 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_saveafter(char *str)
{
	printf("Dentro do saveafter");
	while (*str != '\n')
		str++;
	str++; //Para pular o \n e retornar o inicio da prox palavra
	return (str);
}

char	*ft_reader(int fd)
{
	int			readsize;
	char		*buff;
	static char	*str;

	buff = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
	{
		free(buff);
		return (0);
	}
	readsize = read(fd, buff, BUFFER_SIZE);
	if (readsize < 0)
		return (0);
	printf("\n>>> Lendo o buff\n%s\n>>>fim da leitura\n", buff);
	if (ft_strchr(buff, '\n'))
	{
		str = ft_saveafter(buff);
		printf("\n>>> Depois da quebra: %s\n", str);
	}
	return (buff);
}

int	main(void)
{
	int	fd;

	fd = open("teste.txt", O_RDONLY);
	ft_reader(fd);
	return (0);
}
