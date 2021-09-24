/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:41:49 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/16 11:08:38 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
