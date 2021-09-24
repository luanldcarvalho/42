/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:39:53 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/16 12:55:47 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	source[] = "github.com/luanldcarvalho";
	char	*target = strdup(source);
	char	source2[] = "github.com/luanldcarvalho";
	char	*target2 = ft_strdup(source2);

	printf("\nUsing [strdup ] ===> \n");
	printf("%s", target);

	printf("\n\nUsing [ft_strdup ] ===> \n");
	printf("%s", target2);
	return (0);
}
