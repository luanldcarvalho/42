/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:48:18 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/26 14:48:19 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int argument)
{
	if (argument >= 33 && argument <= 254)
		return (1);
	return (0);
}