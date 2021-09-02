/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:48:34 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/02 12:34:08 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/*size_t strlen(const char *s);*/

int	main(void)
{
	char	*teste;

	char	ch[] = {'t', 'e', 's', 't', 'e', '\0'};
	printf("\nUsing [ft_strlen] ===> ");
	printf("\nThe string is: [%s]. Length of string is: %ld", ch, ft_strlen(ch));
	teste = "testando";
	printf("\nThe string is: [%s]. Length of string is: %ld", teste, ft_strlen(teste));

	printf("\n\nUsing [strlen] ===> ");
	printf("\nThe string is: [%s]. Length of string is: %ld", ch, strlen(ch));
	teste = "testando";
	printf("\nThe string is: [%s]. Length of string is: %ld\n", teste, strlen(teste));
	return (0);
}
