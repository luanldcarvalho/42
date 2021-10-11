/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:03:27 by lluciano          #+#    #+#             */
/*   Updated: 2021/10/06 23:33:02 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*itoafc(unsigned int n, char *nstr, int len, int negative)
{
	nstr[--len] = '\0';
	while (len > 0)
	{
		len--;
		nstr[len] = (n % 10) + 48;
		n = n / 10;
	}
	if (negative == 1)
		nstr[len] = '-';
	return (nstr);
}

static size_t	lenght_num(int num)
{
	size_t	size;

	size = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		size++;
		num = num / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*nstr;
	int				len;
	int				negative;
	unsigned int	n_unsigned;

	negative = 0;
	len = lenght_num(n) + 1;
	if (n < 0)
	{
		len = len + 1;
		nstr = malloc(sizeof(char) * len);
		negative = 1;
		n_unsigned = n * -1;
	}
	else
	{
		nstr = malloc(sizeof(char) * len);
		n_unsigned = n;
	}
	if (nstr == NULL)
		return (NULL);
	itoafc(n_unsigned, nstr, len, negative);
	return (nstr);
}
