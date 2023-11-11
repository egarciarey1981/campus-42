/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:00:46 by eliegarc          #+#    #+#             */
/*   Updated: 2023/10/25 21:00:48 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int i)
{
	int	len;

	len = 0;
	if (i == 0)
		return (1);
	else if (i < 0)
	{
		len++;
		i = -i;
	}
	while (i != 0)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa2(int n, char *str, int i)
{
	if (i >= 0)
	{
		str[i] = '0' + n % 10;
		ft_itoa2(n / 10, str, --i);
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_intlen(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		str = NULL;
	else if (n >= 0)
		ft_itoa2(n, str, len - 1);
	else
	{
		if (n == -2147483648)
		{
			str[1] = '2';
			ft_itoa2(147483648, &str[2], len - 3);
		}
		else
			ft_itoa2(-n, str, len - 1);
		str[0] = '-';
	}
	return (str);
}
