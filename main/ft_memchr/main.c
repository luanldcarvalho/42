/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:10:39 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/01 20:26:22 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h> //excluir antes de finalizar

int main () {
	const char str[] = "http://www.github.com/luanldcarvalho/";
	const char ch = '.';
	char *ret;

	printf("String full is - |%s|\n", str);
	ret = memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
	return(0);
}
