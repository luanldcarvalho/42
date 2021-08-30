/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:43:17 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/30 13:43:23 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	argument;

	argument = '5';
	if (ft_isprint(argument) == 0)
		printf ("\n%d is not a print value", argument);
	else
		printf ("\n%d is a print value", argument);
	argument = 0x800;
	if (ft_isprint(argument) == 0)
		printf ("\n%d is not a print value", argument);
	else
		printf ("\n%d is a print value", argument);
	return (0);
}
