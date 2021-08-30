/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 13:44:50 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/30 13:44:50 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*str;
	const char	ch = '.';
	char		*ret;

	str = "http://www.github.com/luanldcarvalho/";
	ret = ft_strchr(&str, ch);
	printf ("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
