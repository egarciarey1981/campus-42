/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:35:00 by eliegarc          #+#    #+#             */
/*   Updated: 2023/10/25 19:35:03 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != c && set[i] != '\0')
		i++;
	return (set[i] != '\0');
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	ini;
	int	end;

	ini = 0;
	while (ft_inset(s1[ini], set) && s1[ini] != '\0')
		ini++;
	end = ft_strlen(s1) - 1;
	while (ft_inset(s1[end], set) && end > ini)
		end--;
	return (ft_substr(s1, ini, end - ini + 1));
}
