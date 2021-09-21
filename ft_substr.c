/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:02:05 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/20 21:52:53 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pointer;
	size_t	index;
	size_t	index2;

	pointer = malloc(len);
	index = 0;
	index2 = 0;
	while (index < start)
		index++;
	if (index == start)
	{
		while (len > 0)
		{
			pointer[index2] = s[index + index2];
			index2++;
			len--;
		}
		return (pointer);
	}
	return (NULL);
}
