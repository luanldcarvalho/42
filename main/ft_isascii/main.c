/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:42:16 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/30 13:42:26 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int argument;
	int result;

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

	return (0);
}
