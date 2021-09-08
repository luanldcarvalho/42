/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:49:41 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/06 11:01:51 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/*int memcmp(const void *s1, const void *s2, size_t n);*/

 int main (void)
{
	char str1[15];
	char str2[15];
	int ret;

	memcpy(str1, "abcdefm", 7);
	memcpy(str2, "abcdeff", 7);

	ret = ft_memcmp(str1, str2, 7);

	if(ret > 0) {
		printf("%d", ret);
	} else if(ret < 0) {
		printf("%d", ret);
	} else {
		printf("%d", ret);
	}

	return(0);
}
