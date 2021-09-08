/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:35:41 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/08 12:55:51 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/*int strncmp(const char *s1, const char *s2, size_t n);*/

int main ()
{
	char str1[15];
	char str2[15];
	int ret;
	int ret2;
	int n;

	strcpy(str1, "0abcdef");
	strcpy(str2, "ABCDEF");
	n = 5;

	ret = strncmp(str1, str2, n);
	ret2 = ft_strncmp(str1, str2, n);

	printf("\nUsing [strncmp] ===> ");
	if(ret < 0) {
		printf("str1 is less than str2");
	} else if(ret > 0) {
		printf("str2 is less than str1");
	} else {
		printf("str1 is equal to str2");
	}

	printf("\nUsing [ft_strncmp] ===> ");
	if(ret2 < 0) {
		printf("str1 is less than str2");
	} else if(ret2 > 0) {
		printf("str2 is less than str1");
	} else {
		printf("str1 is equal to str2");
	}

	printf("\n");
	return(0);
}

/*if Return value < 0 then it indicates str1 is less than str2.
* if Return value > 0 then it indicates str2 is less than str1.
* if Return value = 0 then it indicates str1 is equal to str2.*/
