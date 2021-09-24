/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:44:22 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/02 12:21:56 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
/*int islower(int c);*/

int	main(void)
{
	int	argument;
	int	result;

	printf("\nUsing [ft_tolower] ===> ");
	argument = '5';
	result = ft_tolower(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a upper case", argument, argument);
	else
		printf ("\n%d (%c) after to lower is >> %c", argument, argument, result);
	argument = 'a';
	result = ft_tolower(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a upper case", argument, argument);
	else
		printf ("\n%d (%c) after to lower is >> %c", argument, argument, result);
	argument = 'B';
	result = ft_tolower(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a upper case", argument, argument);
	else
		printf ("\n%d (%c) after to lower is >> %c", argument, argument, result);
	argument = 0x800;
	result = ft_tolower(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a upper case", argument, argument);
	else
		printf ("\n%d (%c) after to lower is >> %c", argument, argument, result);

	printf("\n\nUsing [tolower] ===> ");
	argument = '5';
	result = tolower(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a upper case", argument, argument);
	else
		printf ("\n%d (%c) after to lower is >> %c", argument, argument, result);
	argument = 'a';
	result = tolower(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a upper case", argument, argument);
	else
		printf ("\n%d (%c) after to lower is >> %c", argument, argument, result);
	argument = 'B';
	result = tolower(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a upper case", argument, argument);
	else
		printf ("\n%d (%c) after to lower is >> %c", argument, argument, result);
	argument = 0x800;
	result = tolower(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a upper case\n", argument, argument);
	else
		printf ("\n%d (%c) after to lower is >> %c\n", argument, argument, result);
	return (0);
}
