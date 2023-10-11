/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:01:45 by eliegarc          #+#    #+#             */
/*   Updated: 2023/10/11 14:01:49 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)b1;
	ptr2 = (unsigned char *)b2;
	while (i < len && *ptr1 == *ptr2)
	{
		ptr1++;
		ptr2++;
		i++;
	}
	if (i == len)
		return (0);
	else
		return (*ptr1 - *ptr2);
}
