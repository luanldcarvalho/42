/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:57:13 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/01 20:07:59 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	ch;

	string = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*string == ch)
			return (string);
		*string++;
		n--;
	}
	return (NULL);
}
