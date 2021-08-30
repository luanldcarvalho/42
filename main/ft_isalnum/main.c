/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:41:48 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/30 13:41:49 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int argument;
	int result;

	argument = '5';
	result = ft_isalnum(argument);
	printf("When %d is passed, return value is %d\n", argument, result);

	argument = 'Q';
	result = ft_isalnum(argument);
	printf("When %d is passed, return value is %d\n", argument, result);

	argument = 'l';
	result = ft_isalnum(argument);
	printf("When %d is passed, return value is %d\n", argument, result);

	argument = '+';
	result = ft_isalnum(argument);
	printf("When %d is passed, return value is %d\n", argument, result);

	return (0);
}
