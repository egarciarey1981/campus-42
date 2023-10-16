/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:00:15 by eliegarc          #+#    #+#             */
/*   Updated: 2023/10/13 10:00:17 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}
