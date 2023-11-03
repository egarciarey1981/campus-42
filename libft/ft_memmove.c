/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 09:13:40 by eliegarc          #+#    #+#             */
/*   Updated: 2023/10/07 09:13:43 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memmove_forward(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

static void	*ft_memmove_backward(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len;
	while (i > 0)
	{
		((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
		i--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
		return (ft_memmove_forward(dst, src, len));
	else
		return (ft_memmove_backward(dst, src, len));
}
