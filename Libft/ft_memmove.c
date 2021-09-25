/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:56:58 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/25 16:14:28 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*memcpyend(void *dest, const void *src, int n)
{
	unsigned char	*destine;
	unsigned char	*source;

	destine = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (n--)
		destine[n] = source[n];
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (n == 0)
		return (dest);
	if (dest == NULL && src == NULL)
		return (NULL);
	if (src < dest)
		memcpyend(dest, src, n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
