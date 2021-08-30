/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:40:30 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/30 13:40:31 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	argument;

	argument = '2';

	if (ft_isdigit(argument) == 0)
			printf("%d is not a digit.",argument);
	else
			printf("%d is a digit.",argument);
	return (0);
}
