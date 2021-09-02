/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:40:30 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/01 21:23:49 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
/*int isdigit(int c);*/

int	main(void)
{
	int	c;
	int	cTest;

	c		= '2';
	cTest	= '2';

	printf("Using [ft_isdigit] ===> ");
	if (ft_isdigit(c) == 0)
			printf("%d is not a digit.\n",c);
	else
		printf("%d is a digit.\n",c);
	printf("Using [isdigit] ===> ");
	if (ft_isdigit(cTest) == 0)
			printf("%d is not a digit.\n",cTest);
	else
		printf("%d is a digit.\n",cTest);
	return (0);
}
