/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:41:48 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/02 11:56:32 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
/*int isalnum(int c);*/

int	main(void)
{
	int argument;
	int result;

	printf("Using [ft_isalnum] ===> \n");
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

	printf("\nUsing [isalnum] ===> \n");
	argument = '5';
	result = isalnum(argument);
	printf("When %d is passed, return value is %d\n", argument, result);
	argument = 'Q';
	result = isalnum(argument);
	printf("When %d is passed, return value is %d\n", argument, result);
	argument = 'l';
	result = isalnum(argument);
	printf("When %d is passed, return value is %d\n", argument, result);
	argument = '+';
	result = isalnum(argument);
	printf("When %d is passed, return value is %d\n", argument, result);

	printf("\nThe values returned are nonzero if the character c falls into the tested class, and zero if not.\n");
	return (0);
}
