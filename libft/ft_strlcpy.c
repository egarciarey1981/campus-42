/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 12:53:47 by eliegarc          #+#    #+#             */
/*   Updated: 2023/10/07 12:53:49 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(src))
	{
		ft_memcpy(dst, src, dstsize);
		dst[dstsize - 1] = '\0';
	}
	else
	{
		ft_memcpy(dst, src, ft_strlen(src));
		dst[ft_strlen(src)] = '\0';
	}
	return (ft_strlen(src));
}
