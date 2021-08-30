/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 12:18:10 by lluciano          #+#    #+#             */
/*   Updated: 2021/08/30 12:41:49 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *string1, const char *string2, size_t n)
/*const char: is an immutable pointer to an immutable character/string.
* is an unsigned type. So, it cannot represent any negative values(<0).
* You use it when you are counting something, and are sure that it cannot be negative.*/
{
	size_t	index;

	index = 0;
	if ( n == 0 )
		return (0);
		/*Because in this case, it will not be necessary to compare the strings*/
	while ( (string1(index) == string2(index)) && string1(index) != '\0' && index < n - 1)
	/*String1 != 0 because, if string(2) it'll be different, it'll be != string1 first.*/
	/*index < n -1: because with this we calculate with last char*/
	return( string1[index] - string2[index]);

}
