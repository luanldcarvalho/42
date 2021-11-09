/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:17:43 by lluciano          #+#    #+#             */
/*   Updated: 2021/11/09 10:52:37 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_saveafter(char *str)
{
	printf("Dentro do saveafter");
	while (*str != '\n')
		str++;
	str++;
	printf("Str: %s", str);
	return (str);
}

char	*ft_reader(char *next_line)
{
	int		i;
	char	*str;

	i = 0;
	if (next_line == NULL)
		return (NULL);
	while (next_line[i] != '\0' && next_line[i] != '\n')
		i++;
	i = i + 2;
	str = (char *)malloc(sizeof(char) * i);
	if (next_line == NULL)
		return (NULL);
	i = 0;
	while (next_line[i] != '\0' && next_line[i] != '\n')
	{
		str[i] = next_line[i];
		i++;
	}
	if (next_line[i] == '\n')
	{
		str[i] = '\n';
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_nextline(char *next_line, int fd)
{
	int		size_readed;
	char	*buff;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1)); // Tamanho buffersize + \0
	if (buff == NULL) // Se erro na alocação, return NULL e free BUFF
	{
		free(buff);
		return (NULL);
	}
	size_readed = 1; // Porque enquanto 1 tem arquivo para ser lido, 0 fim do arquivo e -1 erro no read
	while (!ft_strchr(next_line, '\n') && size_readed != 0)
	{
		size_readed = read(fd, buff, BUFFER_SIZE);
		if (size_readed == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[size_readed] = '\0';
		next_line = ft_strjoin(next_line, buff);
	}
	free(buff);
	return (next_line);
}

char	*get_next_line(int fd)
{
	char		*line_readed;
	static char	*next_line;

	next_line = NULL;
	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	next_line = ft_nextline(next_line, fd); //ja tenho proxima linha? se nao, chamo a segunda linha.
	line_readed = ft_reader(next_line);//função que recebe os valores de nextline para serem retornados na getnextline
	next_line = ft_saveafter(next_line);//função para armazenar o restante que precisa ser lido
	if (line_readed[0] == '\0')
	{
		free(next_line);
		free(line_readed);
		return (NULL);
	}
	return (line_readed);
}

int	main(void)
{
	int	fd;

	fd = open("teste.txt", O_RDONLY);
	get_next_line(fd);
	return (0);
}
