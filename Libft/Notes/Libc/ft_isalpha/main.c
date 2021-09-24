/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:40:26 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/01 21:01:25 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
/*int isalpha(int c);*/

int	main(void)
{
	int	res;
	int	resTest;

	res = ft_isalpha(100);
	printf("Using [ft_isalpha] ===> %d\n", res);
	resTest = isalpha(100);
	printf("Using [isalpha] ===> %d\n", res);
	return (0);
}


