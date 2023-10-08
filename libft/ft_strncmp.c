/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:53:30 by eliegarc          #+#    #+#             */
/*   Updated: 2023/10/08 10:53:32 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	while (*s1 == *s2 && len > 0 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
		len--;
	}
	if (len == 0 || (unsigned char)*s1 == (unsigned char)*s2)
		return (0);
	else if ((unsigned char)*s1 > (unsigned char)*s2)
		return (1);
	else
		return (-1);
}
