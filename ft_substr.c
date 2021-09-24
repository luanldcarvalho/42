/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:02:05 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/24 12:28:00 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pointer;
	size_t	index;
	size_t	index2;

	pointer = (char *)malloc(len + 1);
	if (pointer == NULL || s == NULL)
		return (NULL);
	index = 0;
	index2 = 0;
	while (index != start)
		index++;
	while (s[index])
	{
		if (index2 < len)
		{
			pointer[index2] = s[index];
			index2++;
		}
		index++;
	}
	pointer[index2] = 0;
	return (pointer);
}
