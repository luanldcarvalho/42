/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:02:51 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/20 21:47:43 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	verify_begin(char *str, char *set)
{
	int		a;
	int		b;
	char	*strp;

	a = 0;
	b = 0;
	strp = str;
	while (strp[a] != '\0')
	{
		while (set != '\0')
		{
			if (strp[a] == set[b])
				a++;
			if (strp[a] != set[b])
				b++;
		}
		a++;
	}
	return (strp[a]);
}

static char	verify_end(char *str, char *set)
{
	int		a;
	int		b;
	char	*strp;

	a = strlen(str);
	b = strlen(set);
	strp = str;
	while (a > 0)
	{
		while (b > 0)
		{
			if (strp[a] == set[b])
				a--;
			if (strp[a] != set[b])
				b--;
		}
		a--;
	}
	return (strp[a]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*strendb;
	char	*strende;
	int		length;

	length = ft_strlen(s1);
	str = s1;
	strendb = verify_begin(str, set);
	strende = verify_end(str, set);
	return (strend);
}

