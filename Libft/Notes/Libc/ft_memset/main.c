/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:49:21 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/02 12:43:57 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/*void *memset(void *s, int c, size_t n);*/

int main (void)
{
	char	str[50] = "This is string.h library function";
	char	str2[50] = "This is string.h library function";
	int		number = 8;

	printf("\nUsing [ft_memset] ===> ");
	printf("\n The string is [%s]", str);
	ft_memset(str,'$',number);
	printf("\n after ft_memset [%s]", str);

	printf("\n\nUsing [memset] ===> ");
	printf("\n The string is [%s]", str2);
	memset(str2,'$',number);
	printf("\n after ft-memset [%s]\n", str2);
	return(0);
}
