/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:45:41 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/30 13:45:51 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
	char str1[15];
	char str2[15];
	int ret;


	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	ret = strcmp(str1, str2);


	if(ret < 0) {
		printf("str1 is less than str2");
	} else if(ret > 0) {
		printf("str2 is less than str1");
	} else {
		printf("str1 is equal to str2");
	}

	return(0);
}

/*if Return value < 0 then it indicates str1 is less than str2.
* if Return value > 0 then it indicates str2 is less than str1.
* if Return value = 0 then it indicates str1 is equal to str2.*/
