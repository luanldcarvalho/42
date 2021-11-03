/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:17:43 by lluciano          #+#    #+#             */
/*   Updated: 2021/11/03 12:39:43 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h> //function read
#include <fcntl.h> //function open
#include <stdio.h> //function printf

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0 || dst == NULL || src == NULL)
		return (ft_strlen(src));
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (dst[a] != '\0' && a < size)
		a++;
	while (src[b] != '\0' && (a + b + 1) < size)
	{
		dst[a + b] = src[b];
		b++;
	}
	if (a != size)
		dst[a + b] = '\0';
	return (a + ft_strlen(src));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, len);
	ft_strlcat(str, s2, len);
	return (str);
}

size_t	ft_strlen(const char *s)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		index ++;
	}
	return (index);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		leng_s;

	str = (char *)s;
	i = 0;
	leng_s = ft_strlen(s);
	if (c > 127)
		c = c % 256;
	while (i < leng_s)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (NULL);
}

char	*ft_saveafter(char *str)
{
	printf("Dentro do saveafter");
	while (*str != '\n')
		str++;
	str++; // para pular o \n e retornar o inicio da prox palavra
	return (str);
}

int	ft_reader(int fd)
{
	char	*str;
	char	*savestr;
	int		i;

	i = 1;
	while (i--)
	{
		read(fd, str, BUFFER_SIZE);
		ft_strjoin(savestr, str);
		printf("------\nafter read%d\n------\n>>> Start\n%s\n>>> End\n", i, str);
		if (ft_strchr(str, '\n'))
		{
			//printf("\n>>> Na string Acima ^ temos uma quebra de linha.\n");
			savestr = ft_saveafter(str);
			printf("\n>>> saveafter: %s\n", str);
		}
	}
	return (0);
}

int	main(void)
{
	int	fd;

	fd = open("teste.txt", O_RDONLY);
	printf("\n>>> File descriptor: %d\n", (fd));
	printf("\n>>> Calling ft_reader here <<<\n\n");
	ft_reader(fd);
	return (0);
}
