/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:02:06 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/08 17:15:24 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(little);
	if (*little == 0)
		return ((char *)big);
	while (big[i] != 0 && len > 0)
	{
		i++;
		while (big[i] == little[i])
		{
			i++;
			if (*little == '\0')
			{
				i = i - l;
				return ((char *)big);
			}
		}
	}
	return (NULL);
}
