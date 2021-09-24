/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:43:17 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/02 12:01:58 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
/*int isprint(int c);*/

int	main(void)
{
	int	argument;

	printf("\nUsing [ft_isprint] ===>");
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

	printf("\n\nUsing [isprint] ===>");
	argument = '5';
	if (isprint(argument) == 0)
		printf ("\n%d is not a print value", argument);
	else
		printf ("\n%d is a print value", argument);
	argument = 0x800;
	if (isprint(argument) == 0)
		printf ("\n%d is not a print value\n", argument);
	else
		printf ("\n%d is a print value\n", argument);
	return (0);
}
