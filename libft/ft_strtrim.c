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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	char	*str;

	if (ft_strlen(s1) == 0)
		return (ft_substr(s1, 0, 1));
	if (ft_strlen(set) == 0)
		return (ft_substr(s1, 0, ft_strlen(s1)));
	str = (char *)s1;
	i = 0;
	while (ft_strchr(set, str[i]))
		i++;
	start = i;
	i = ft_strlen(s1);
	while (ft_strchr(set, str[i]))
		i--;
	return (ft_substr(s1, start, i - start + 1));
}
