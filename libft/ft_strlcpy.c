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

static int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (dstsize > 0)
	{
		dstsize = ft_min(srcsize, dstsize - 1);
		ft_memcpy(dst, src, dstsize);
		dst[dstsize] = '\0';
	}
	return (srcsize);
}
