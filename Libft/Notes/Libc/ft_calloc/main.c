/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:35:40 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/16 12:38:37 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* calloc example */
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* calloc, exit, free */

int	main(void)
{
	int	i;
	int	n;
	int	*pData;
	int	i2;
	int	n2;
	int	*pData2;

	i = 5;
	i2 = 5;
	printf("\nUsing [calloc (%d)] ===> \n", i);
	pData = (int *) calloc(i, sizeof(int));
	if (pData == NULL)
		exit (1);
	for (n = 0; n < i; n++)
	{
		pData[n] = 0;
	}
	printf ("You have entered: ");
	for (n = 0; n < i; n++)
		printf ("%d ", pData[n]);
	free (pData);
	printf("\n\nUsing [ft_calloc (%d)] ===> \n", i2);
	pData2 = (int *) calloc(i2, sizeof(int));
	if (pData2 == NULL)
		exit (1);
	for (n = 0; n < i; n++)
	{
		pData2[n] = 0;
	}
	printf ("You have entered: ");
	for (n = 0; n < i; n++)
		printf ("%d ", pData2[n]);
	free (pData2);
	return (0);
}
