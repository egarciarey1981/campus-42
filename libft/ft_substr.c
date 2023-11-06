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
	size_t	total;

	if (len == 0)
		total = 1;
	else if (start + len <= ft_strlen(s))
		total = len + 1;
	else if (ft_strlen(s) >= start)
		total = ft_min_size(ft_strlen(s) - start, len) + 1;
	else
		total = 1;
	ptr = malloc(sizeof(char) * total);
	if (ptr == NULL)
		return (NULL);
	if (total > 1)
		ft_memmove(ptr, s + start, total);
	ptr[total - 1] = '\0';
	return (ptr);
}
