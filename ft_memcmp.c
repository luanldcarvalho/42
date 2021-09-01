/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:28:33 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/01 20:44:21 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const int	*ch1;
	const int	*ch2;

	ch1 = s1;
	ch2 = s2;
	while (n > 0)
		if (*ch1 == *ch2)
			n--;
	if (*ch1 > *ch2)
		return (1);
	if (*ch1 < *ch2)
		return (-1);
	return (0);
}
