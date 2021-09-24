/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:02:27 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/17 12:51:28 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pointer;
	int		counter;
	int		index;
	int		index2;

	counter = ft_strlen(s1) + ft_strlen(s2) + 1;
	pointer = malloc(counter);
	index = 0;
	index2 = 0;
	pointer[counter] = '\0';
	while (pointer != NULL)
	{
		while (s1[index] != '\0')
		{
			pointer[index] = s1[index];
			index++;
		}
		while (s2[index2] != '\0')
		{
			pointer[index + index2] = s2[index2];
			index2++;
		}
		return (pointer);
	}
	return (NULL);
}
