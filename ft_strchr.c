/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:50:20 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/08 11:58:17 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned int	i;
	unsigned int	leng_s;

	str = (char *)s;
	i = 0;
	leng_s = ft_strlen(s);
	while (i < leng_s)
	{
		if (str[i] == c)
			return(&str[i]);
		i++;
	}
	return (NULL);
}
