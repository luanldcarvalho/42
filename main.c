/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:55:05 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/14 12:58:46 by lluciano         ###   ########.fr       */
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

	printf ("Amount of numbers to be entered: ");
	scanf ("%d", &i);
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
	return (0);
}
