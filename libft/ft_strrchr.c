/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:48:40 by eliegarc          #+#    #+#             */
/*   Updated: 2023/09/27 19:48:42 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	l;

	i = 0;
	l = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			l = i;
		i++;
	}
	if ((char)c == '\0')
		return (&((char *)s)[i]);
	else if (l >= 0)
		return (&((char *)s)[l]);
	else
		return (NULL);
}
