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
	void *ptr;
	size_t i;

	if (dst == src)
		return (dst);
	else if (dst < src)
		return ft_memcpy(dst, src, len);
	ptr = dst;
	i = 1;
	while (i <= len)
	{
		((unsigned char*) ptr)[len-i] = ((unsigned char*)src)[len-i];
		i++;
	}
	return (dst);
}
