/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:44:50 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/02 17:09:22 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/*void *memchr(const void *s, int c, size_t n);*/

int main () {
	const char str[] = "http://www.github.com/luanldcarvalho/";
	const char ch = '.';
	char *ret;

	printf("\nUsing [ft_memchr] ===> ");
	printf("String full is - |%s|\n", str);
	ret = ft_memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);

	printf("\n\nUsing [memchr] ===> ");
	printf("String full is - |%s|\n", str);
	ret = memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
	return(0);
}
