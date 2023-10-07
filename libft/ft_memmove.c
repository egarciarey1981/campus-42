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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	int	foot;
	int	end;

	if (dst == src)
		return (dst);
	i = 0;
	foot = 1;
	end = len;
	if (dst > src)
	{
		i = len - 1;
		foot = -1;
		end = -1;
	}
	while (i != end)
	{
		((unsigned char *) dst)[i] = ((unsigned char *)src)[i];
		i = i + foot;
	}
	return (dst);
}
