/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:01:13 by eliegarc          #+#    #+#             */
/*   Updated: 2023/10/08 10:01:15 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	result;

	if (ft_strlen(dst) > dstsize)
		return (ft_strlen(src) + dstsize);
	result = ft_strlen(dst) + ft_strlen(src);
	if (ft_strlen(dst) < dstsize)
	{
		if (ft_strlen(dst) + ft_strlen(src) < dstsize)
		{
			ft_memcpy(dst + ft_strlen(dst), src, ft_strlen(src));
			dst[result] = '\0';
		}
		else
		{
			ft_memcpy(dst + ft_strlen(dst), src, dstsize - ft_strlen(dst) - 1);
			dst[dstsize - 1] = '\0';
		}
	}
	return (result);
}
