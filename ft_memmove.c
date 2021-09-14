/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:56:58 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/13 18:02:39 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destine;
	const char	*source;
	char		*memory;

	memory = malloc(sizeof (n));
	destine = dest;
	source = src;
	ft_memcpy(memory, source, n);
	ft_memcpy(destine, memory, n);
	free (memory);
	return (dest);
}
