/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:32:16 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/11 17:41:28 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' \
		|| c == '\r')
		return (1);
	return (0);
}

int	atoi(const char *nptr)
{
	int	i;
	int	negative;
	int	*number;
	int	ni;

	i = 0;
	negative = 1;
	ni = 0;
	if (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		negative = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		number[ni] = nptr[i] - 48;
		i++;
		ni++;
	}
	number = number * negative;
	return (number);
}
