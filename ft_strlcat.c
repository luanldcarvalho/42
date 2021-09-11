/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:41:49 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/11 15:10:03 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (size == 0)
		return (0);
	while (dst[a] != '\0' && a < size)
		a++;
	while (src[b] != '\0' && size > 0)
	{
		dst[a] = src[b];
		a++;
		b++;
		size--;
	}
	dst[a] = '\0';
	return (a);
}
/*line31: (size == 0 || src[b] == '\0'*/
