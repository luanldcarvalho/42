/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:30:10 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/16 12:34:49 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	int		val;
	char	str[20];
	int		val2;
	char	str2[20];

	printf("\nUsing [atoi] ===> \n");
	strcpy(str, "98993489");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	strcpy(str, "tutorialspoint.com");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	printf("\nUsing [ft_atoi] ===> \n");
	strcpy(str2, "98993489");
	val2 = atoi(str2);
	printf("String value = %s, Int value = %d\n", str2, val2);
	strcpy(str2, "tutorialspoint.com");
	val2 = atoi(str2);
	printf("String value = %s, Int value = %d\n", str2, val2);
	return (0);
}
