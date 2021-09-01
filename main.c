/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:35:41 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/01 19:47:32 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h> //excluir antes de finalizar

int	main(void)
{
	char	str1[20] = "abcdefghijklmno";
	char	str2[20] = "0011223344556677";
	int		number = 5;

	printf("\nString1: %s/ String2: %s/ Number: %d \n", str1, str2, number);
	memmove(str1, str2, number);
	printf("\nApós o memmove ... String1: %s/ String2: %s \n", str1, str2);

	char	str3[20] = "abcdefghijklmno";
	char	str4[20] = "0011223344556677";
	number = 5;

	printf("\n\nString1: %s/ String2: %s/ Number: %d \n", str1, str2, number);
	ft_memmove(str3, str4, number);
	printf("\nApós o ft_memmove ... String1: %s/ String2: %s \n", str3, str4);


	return (0);
}
