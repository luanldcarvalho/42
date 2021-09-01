/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:33:48 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/01 19:43:40 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		index;
	char	*str2;

	index = 0;
	str2 = s;
	while(index < n)
	{
		str2[index] = (char)c;
		index ++;
	}
	return (s);
}
