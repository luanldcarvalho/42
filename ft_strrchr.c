/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:22:44 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/08 12:34:10 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	*str;
	int		leng_s;

	str = (char *)s;
	leng_s = ft_strlen(s);
	while (leng_s > 0)
	{
		if (str[leng_s] == c)
			return(&str[leng_s]);
		leng_s--;
	}
	if (c == '\0')
		return(&str[leng_s]);
	return (NULL);
}
