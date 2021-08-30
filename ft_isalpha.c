/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:48:25 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/30 17:41:17 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int argument)
{
	if (argument >= 'A' && argument <= 'Z')
		return (1);
	if (argument >= 'a' && argument <= 'z')
		return (2);
	return (0);
}
