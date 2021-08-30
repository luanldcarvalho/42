/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:48:34 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/30 15:24:40 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*teste;

	char	ch[] = {'t', 'e', 's', 't', 'e', '\0'};
	printf("\nThe string is: %s .Length of string is: %ld\n", ch, strlen(ch));
	teste = "testando";
	printf("\nThe string is: %s .Length of string is: %ld\n", ch, strlen(teste));
	return (0);
}
