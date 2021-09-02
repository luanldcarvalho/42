/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:43:42 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/02 12:17:53 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
/*int toupper(int c);*/

int	main(void)
{
	int	argument;
	int	result;

	printf("\nUsing [ft_toupper] ===> ");
	argument = '5';
	result = ft_toupper(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a lower case", argument, argument);
	else
		printf ("\n%d (%c) after to upper is >> %c", argument, argument, result);
	argument = 'a';
	result = ft_toupper(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a lower case", argument, argument);
	else
		printf ("\n%d (%c) after to upper is >> %c", argument, argument, result);
	argument = 'B';
	result = ft_toupper(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a lower case", argument, argument);
	else
		printf ("\n%d (%c) after to upper is >> %c", argument, argument, result);
	argument = 0x800;
	result = ft_toupper(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a lower case", argument, argument);
	else
		printf ("\n%d (%c) after to upper is >> %c", argument, argument, result);

	printf("\n\nUsing [toupper] ===> ");
	argument = '5';
	result = toupper(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a lower case", argument, argument);
	else
		printf ("\n%d (%c) after to upper is >> %c", argument, argument, result);
	argument = 'a';
	result = toupper(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a lower case", argument, argument);
	else
		printf ("\n%d (%c) after to upper is >> %c", argument, argument, result);
	argument = 'B';
	result = toupper(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a lower case", argument, argument);
	else
		printf ("\n%d (%c) after to upper is >> %c", argument, argument, result);
	argument = 0x800;
	result = toupper(argument);
	if (result == 0)
		printf ("\n%d (%c) is not a lower case\n", argument, argument);
	else
		printf ("\n%d (%c) after to upper is >> %c\n", argument, argument, result);
	return (0);
}
