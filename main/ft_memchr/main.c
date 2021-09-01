/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:10:39 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/01 20:11:00 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h> //excluir antes de finalizar

void *memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	ch;

	string = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*string == ch)
			return (string);
		*string++;
		n--;
	}
	return (NULL);
}
