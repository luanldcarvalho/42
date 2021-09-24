/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:55:55 by lluciano          #+#    #+#             */
/*   Updated: 2021/09/08 15:55:56 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
/*size_t	strlcpy(char *dst, const char *src, size_t size);*/
int	main(void)
{
	char str1[15];
	char str2[15];
	int ret;
	int	buffer;

	strcpy(str1, "0abcdef");
	strcpy(str2, "ABCDEF");
	buffer = 15;

	printf("\nstr1 (dest):|%s| str2(scr): |%s| buffer:(%d)", \
	str1, str2, buffer);
	ret = ft_strlcat(str1, str2, buffer);
	printf("\n\nUsing [ft_strlcat] ===> ");
	printf("\nReturn: (lenght of source): %d", ret);
	printf("\ndest:|%s| src:|%s|", str1, str2);

	printf("\n");
	return(0);
}
