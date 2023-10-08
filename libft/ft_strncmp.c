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
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && i < len && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (i == len || (unsigned char)s1[i] == (unsigned char)s2[i])
		return (0);
	else if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return (1);
	else
		return (-1);
}
