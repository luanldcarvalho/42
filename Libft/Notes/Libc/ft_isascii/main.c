/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:42:16 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/02 12:10:05 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
/*int isdigit(int c);*/

int	main(void)
{
	int argument;
	int result;

	printf("\nUsing [ft_isascii] ===>");
	argument = '5';
	result = ft_isascii(argument);
	if (ft_isascii(argument) == 0)
			printf("\n%d is not a print value",argument);
	else
			printf("\n%d is a print value",argument);
	argument = 0x800;
	result = ft_isascii(argument);
	if (ft_isascii(argument) == 0)
			printf("\n%d is not a print value",argument);
	else
			printf("\n%d is a print value",argument);

	printf("\n\nUsing [isascii] ===>");
	argument = '5';
	result = isascii(argument);
	if (isascii(argument) == 0)
			printf("\n%d is not a print value",argument);
	else
			printf("\n%d is a print value",argument);
	argument = 0x800;
	result = isascii(argument);
	if (ft_isascii(argument) == 0)
			printf("\n%d is not a print value\n",argument);
	else
			printf("\n%d is a print value\n",argument);

	return (0);
}
