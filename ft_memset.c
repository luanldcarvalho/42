/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:33:48 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/30 16:26:50 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(char *str, int c, size_t n)
{
	int		index;

	index = 0;
	while(index < n)
	{
		str[index] = c;
		index ++;
	}
}

