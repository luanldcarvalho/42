/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:37:31 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/08 12:37:32 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/*char	*ft_strrchr(const char *s, int c);*/

int	main(void)
{
	const char	str[] = "https://www.github.com/luanldcarvalho";
	const char	ch = '.';
	char		*ret;
	char		*ret2;

	ret = strrchr(str, ch);
	ret2 = ft_strrchr(str, ch);
	printf("\nThe string is : |%s|\n", str);
	printf("\nUsing [strrchr] ===>");
	printf("String after |%c| is - |%s|\n", ch, ret);
	printf("\nUsing [ft_strrchr] ===>");
	printf("String after |%c| is - |%s|\n", ch, ret2);
	return (0);
}
