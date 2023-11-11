/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:33:58 by eliegarc          #+#    #+#             */
/*   Updated: 2023/11/11 12:34:01 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dup;
	int		i;

	dup = ft_strdup(s);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (dup[i] != '\0')
	{
		dup[i] = f(i, dup[i]);
		i++;
	}
	return (dup);
}
