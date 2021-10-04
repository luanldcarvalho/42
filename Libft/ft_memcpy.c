/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:36:59 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/25 18:24:51 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*destine;
	unsigned char	*source;

	index = 0;
	destine = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	while (n > index)
	{
		destine[index] = source[index];
		index++;
	}
	return (dest);
}
