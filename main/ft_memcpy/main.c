/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:53:24 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/02 13:00:38 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/*void *memcpy(void *dest, const void *src, size_t n);*/

int	main(void)
{
	char	str1[25] = "abcdefghijklmnopqr";
	char	str2[25] = "123456789012345678";
	int		number = 5;

	printf("\nUsing [ft_memcpy] ===> ");
	printf("\nstr1: [%s] str2: [%s] n_copy: [%d]", str1, str2, number);
	ft_memcpy(str1, str2, number);
	printf("\nafter ft_memcpy => str1: [%s] str2: [%s] n_copy: [%d]", str1, str2, number);

	printf("\n\nUsing [memset] ===> ");
	number = 10;
	printf("\nstr1: [%s] str2: [%s] n_copy: [%d]", str1, str2, number);
	memcpy(str1, str2, number);
	printf("\nafter memcpy => str1: [%s] str2: [%s] n_copy: [%d]\n", str1, str2, number);
	return (0);
}
