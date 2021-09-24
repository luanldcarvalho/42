/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:44:50 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/08 12:29:15 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/*char	*ft_strchr(const char *s, int c);*/

int	main(void)
{
	const char	str[] = "https://www.github.com/luanldcarvalho";
	const char	ch = '.';
	char		*ret;
	char		*ret2;

	ret = strchr(str, ch);
	ret2 = ft_strchr(str, ch);
	printf("\nThe string is : |%s|\n", str);
	printf("\nUsing [strchr] ===>");
	printf("String after |%c| is - |%s|\n", ch, ret);
	printf("\nUsing [ft_strchr] ===>");
	printf("String after |%c| is - |%s|\n", ch, ret2);
	return (0);
}

/*
* str = (char *)s;
* 	returning 'const char *' from a function with result type 'char *'
* 	discards qualifiers.
* i = 0;
* 	*s++; expression result unused [-Werror,-Wunused-value]
* leng_c = c;
* 	incompatible integer to pointer conversion passing 'int' to parameter of
* 	type 'const char *'
* return(&str[i]);
* 	returning & because we need the adress and not the value of str[i].
*/
