/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:48:34 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/26 14:58:35 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ft_isalpha.c"
#include "./ft_isdigit.c"
#include "./ft_isalnum.c"
#include "./ft_isascii.c"
#include "./ft_isprint.c"

int	ft_isalpha(int argument);
int	ft_isdigit(int argument);
int	ft_isalnum(int argument);
int	ft_isascii(int argument);
int	ft_isprint(int argument);

/* isalpha
int	main(void)
{
	int	res;

	res = ft_isalpha(100);
	printf("Hello World!");
	printf("%d", res);
	return (0);
}
*/
/* isdigit

int	main(void)
{
	int	argument;

	argument = '2';

    if (ft_isdigit(argument) == 0)
         printf("%d is not a digit.",argument);
    else
         printf("%d is a digit.",argument);
    return (0);
}
*/
/* isalnum
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
*/
/* isascii
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
*/
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
