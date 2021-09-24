/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:03:09 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/22 10:33:03 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(s) + 1);
	if (str == NULL)
		return (NULL);
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c)
		{
			str[i] = '\0';
		}
		i++;
	}
	return ((char **)str);
}
