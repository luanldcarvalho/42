/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:44:22 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/30 13:44:24 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	argument;
	int	result;

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
	return (0);
}
