/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:33:48 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/30 17:38:26 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str1, int c, size_t n)
{
	unsigned int	index;
	unsigned char	*str2;

	index = 0;
	str2 = str1;
	while(index < n)
	{
		str2[index] = (unsigned  char)c;
		index ++;
	}
	return (str1);
}
