/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:48:34 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/25 19:08:44 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ft_isalpha.c"
#include "./ft_isdigit.c"

int	ft_isalpha(int argument);
int	ft_isdigit(int argument);

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
