/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluciano <lluciano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:03:09 by lluciano          #+#    #+#             */
/*   Updated: 2021/10/08 12:32:03 by lluciano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter_words(char const *string, char chr)
{
	int	words;

	words = 0;
	while (*string)
	{
		while (*string == chr)
			string++;
		if (*string != chr && *string != '\0')
		{
			while (*string != chr && *string != '\0')
				string++;
			words++;
		}
	}
	return (words);
}

static char	*to_split(char const *s, int *ires, char c)
{
	char	*result;
	int		start;
	int		i;

	while (s[*ires] == c)
		*ires = *ires + 1;
	start = *ires;
	while (s[*ires] != c && s[*ires] != 0)
		*ires = *ires + 1;
	result = malloc(sizeof(char) * (*ires - start + 1));
	i = 0;
	while (start != *ires)
	{
		result[i] = s[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		i;
	int		ires;

	i = 0;
	ires = 0;
	if (!s)
		return (NULL);
	words = counter_words(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (result == NULL)
		return (NULL);
	while (i != words)
	{
		result[i] = to_split(s, &ires, c);
		i++;
	}
	result[words] = NULL;
	return (result);
}
