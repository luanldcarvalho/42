/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:46:41 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/02 12:50:32 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
/*void bzero(void *s, size_t n);*/

int main (void)
{
	char	str[50] = "This is string.h library function";
	char	str2[50] = "This is string.h library function";
	int		number = 8;

	printf("\nUsing [ft_bzero] ===> ");
	printf("\n The string is [%s]", str);
	ft_bzero(str, number);
	printf("\n after ft_bzero [%s]", str);

	printf("\n\nUsing [bzero] ===> ");
	printf("\n The string is [%s]", str2);
	bzero(str2, number);
	printf("\n after bzero [%s]\n", str2);
	return(0);
}
