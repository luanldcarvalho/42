/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:02:05 by lluciano          #+#    #+#             */
/*   Updated: 2021/10/07 20:59:25 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	verify(char const *s, unsigned int start, size_t len)
{
	size_t	size;

	size = 0;
	if (start > ft_strlen(s))
		return (0);
	while (s[size + start] != '\0' && size < len)
		size++;
	return (size);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pointer;
	size_t	index;
	size_t	size;

	size = verify(s, start, len);
	pointer = malloc((size + 1) * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	index = 0;
	while (size--)
		if (index < len)
			pointer[index++] = s[start++];
	pointer[index] = 0;
	return (pointer);
}
