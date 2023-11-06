/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:26:38 by eliegarc          #+#    #+#             */
/*   Updated: 2023/10/25 20:26:40 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (len1 > 0)
		ft_strlcpy(str, s1, len1 + 1);
	if (len2 > 0)
		ft_strlcpy(str + len1, s2, len2 + 1);
	return (str);
}
