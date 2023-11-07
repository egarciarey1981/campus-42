/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:05:14 by eliegarc          #+#    #+#             */
/*   Updated: 2023/10/28 14:05:17 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(char const *s, char c)
{
	int	i;
	int	count;

	if (s[0] == '\0')
		return (0);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (i != 0 && s[i - 1] != c)
				count++;
		}
		i++;
	}
	count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		n;
	char	**result;

	i = 0;
	j = 0;
	n = 0;
	result = ft_calloc(ft_size(s, c) + 1, sizeof(char **));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = i;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i == 0 || s[i - 1] == c)
			j = ++i;
		else
		{
			result[n] = ft_substr(s, j, i - j);
			n++;
			while (s[i] == c && s[i] != '\0')
				i++;
			j = i;
		}
	}
	result[n] = NULL;
	return (result);
}
