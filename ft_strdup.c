/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:15:43 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/20 21:03:56 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	index;
	char	*string;

	index = 0;
	string = malloc(ft_strlen(s) + 1);
	if (s == NULL || string == NULL)
		return (NULL);
	while (index < (ft_strlen(s) + 1))
	{
		string[index] = s[index];
		index++;
	}
	string[index] = '\0';
	return (string);
}
