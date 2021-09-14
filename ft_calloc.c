/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:10:27 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/14 12:47:15 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*pointer;
	int	size_mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	size_mem = nmemb * size;
	pointer = malloc(size_mem);
	ft_bzero(pointer, size_mem);
	return (pointer);
}
