/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:11:07 by eliegarc          #+#    #+#             */
/*   Updated: 2023/10/13 10:11:09 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min_size(size_t x, size_t y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	counter;

	ptr = malloc(sizeof(char) * (ft_min_size(ft_strlen(s), len) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < start && s[i] != '\0')
		i++;
	if (s[i] == '\0')
	{
		ptr[0] = '\0';
		return (ptr);
	}
	counter = 0;
	while (counter < len && s[i + counter] != '\0')
	{
		ptr[counter] = s[i + counter];
		counter++;
	}
	ptr[counter] = '\0';
	return (ptr);
}
