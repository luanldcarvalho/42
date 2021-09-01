/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:53:24 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/01 13:53:25 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str1[25] = "abcdef string one";
	char	str2[25] = "123456789 string two";
	int		number = 5;

	printf("\nstring 1: %s / string 2: %s\n", str1, str2);
	ft_memcpy(str1, str2, number);
	printf("\nstring 1: %s / string 2: %s\n", str1, str2);
	return (0);
}
