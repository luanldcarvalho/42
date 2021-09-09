/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:41:49 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/08 17:37:15 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	b;

	i = 0;
	b = 0;
	while (dst[i] != '\0')
		i++;
	while (src[b] != '\0' && size > 0)
	{
		dst[i] = src[b];
		i++;
		b++;
		size--;
	}
	dst[i] = '\0';
	return (i);
}
/*line31: (size == 0 || src[b] == '\0'*/
