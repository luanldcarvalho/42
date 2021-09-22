/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:10:27 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/22 11:43:17 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		*pointer;
	size_t	size_mem;

	size_mem = nmemb * size;
	pointer = malloc(size_mem);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, size_mem);
	return (pointer);
}
