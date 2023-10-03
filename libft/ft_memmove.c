/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:28:28 by eliegarc          #+#    #+#             */
/*   Updated: 2023/09/30 17:28:30 by eliegarc         ###   ########.fr       */
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
