/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:55:34 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/02 16:16:11 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> //excluir antes de finalizar
#include <string.h>
/*void *memmove(void *dest, const void *src, size_t n);*/

int	main(void)
{
	char	str1[20] = "abcdefghijklmno";
	char	str2[20] = "123456789012345";
	int		number = 5;

	printf("\nUsing [ft_memmove] ===> ");
	printf("\nstr1: [%s] str2: [%s] number: [%d]", str1, str2, number);
	memmove(str1, str2, number);
	printf("\nAfter ft_memmove => str1: [%s] str2: [%s] number: [%d]", str1, str2, number);

	char	str3[20] = "abcdefghijklmno";
	char	str4[20] = "123456789012345";
	number = 5;

	printf("\n\nUsing [memmove] ===> ");
	printf("\nstr3: [%s] str4: [%s] number: [%d]", str3, str4, number);
	ft_memmove(str3, str4, number);
	printf("\nAfter memmove => str3: [%s] str4: [%s] number: [%d]\n", str3, str4, number);

	return (0);
}
