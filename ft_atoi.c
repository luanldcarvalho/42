/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:32:16 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/13 08:54:33 by lluciano         ###   ########.fr       */
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
	int	index;
	int	negative;
	int	*number;
	int	numberindex;

	index = 0;
	negative = 1;
	number = 0;
	numberindex = 0;
	if (ft_isspace(nptr[index]))
		index++;
	if (nptr[index] == '-')
	{
		negative = -1;
		index++;
	}
	printf("%d", negative);
	/*
	while (ft_isdigit(nptr[i]))
	{
		number[ni] = nptr[i] - 48;
		i++;
		ni++;
	}
	ni = number[0] * negative;
	*/
	return (numberindex);
}
