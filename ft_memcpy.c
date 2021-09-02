/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:36:59 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/02 13:02:20 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			index;
	char		*destine;
	const char	*source;

	index = 0;
	destine = dest;
	source = src;
	while (n > index)
	{
		destine[index] = source[index];
		index++;
	}
	return (dest);
}
