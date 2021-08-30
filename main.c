/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:35:41 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/30 16:25:55 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*buffer;

	buffer = "This is a test of the memset function";
	printf("Before: %s\n", buffer);
	ft_memset(buffer, '+', 4);
	printf("After:  %s\n", buffer);
}
