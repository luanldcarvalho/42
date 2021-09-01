/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:35:41 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/01 20:47:00 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, const char * argv[])
{
	/* Create a place to store our results */
	int result;

	/* Create two arrays to hold our data */
	char example1[50];
	char example2[50];

	/* Copy two strings into our data arrays
	(These can be any data and do not have to be strings) */
	strcpy(example1, "C memcmp at TechOnTheNet.com");
	strcpy(example2, "C memcmp is a memory compare function");

	/* Compare the two strings provided up to the first 9 characters */
	result = memcmp(example1, example2, 9);

	/* If the two arrays are the same say so */
	if (result == 0) printf("Arrays are the same\n");

	/* Compare the two strings provided up to the first 10 characters */
	result = memcmp(example1, example2, 10);

	/* If the first array is less than the second say so
	(This is because the 'a' in the word 'at' is less than
	the 'i' in the word 'is' */
	if (result < 0) printf("Second array is less than the first\n");

	return 0;
}

/*
int	main(void)
{
	char	str1[15];
	char	str2[15];
	int		ret;

	ft_memcpy(str1, "abcdef", 6);
	ft_memcpy(str2, "ABCDEF", 6);
	ret = ft_memcmp(str1, str2, 5);
	if (ret > 0)
	{
		printf("str2 is less than str1");
	}
	else if (ret < 0)
	{
		printf("str1 is less than str2");
	}
	else
	{
		printf("str1 is equal to str2");
	}
	return (0);
}
*/
