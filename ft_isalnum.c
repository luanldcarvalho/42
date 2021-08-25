/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:21:00 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/25 19:21:28 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int argument)
{
	if (argument >= 'A' && argument <= 'Z'
		|| argument >= 'a' && argument <= 'z'
		|| argument >= '0' && argument <= '9')
			return (1);
	return (0);
}
