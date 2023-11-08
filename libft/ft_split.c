/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliegarc <eliegarc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:05:14 by eliegarc          #+#    #+#             */
/*   Updated: 2023/10/28 14:05:17 by eliegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_total_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c && c != '\0')
		i++;
	while (s[i] != '\0')
	{
		count++;
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	*ft_next_word(char const *str, int *pos, char c)
{
	int	i;

	while (str[*pos] == c)
		*pos += 1;
	i = *pos;
	while (str[*pos] != c && str[*pos] != '\0')
		*pos += 1;
	return (ft_substr(str, i, *pos - i));
}

static char	**ft_free(char **result)
{
	int	i;

	i = 0;
	while (result[i] != NULL)
		free(result[i++]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		total_words;
	int		current_word;
	char	**result;

	total_words = ft_total_words(s, c);
	result = malloc((total_words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	else
		result[total_words] = NULL;
	if (total_words == 0)
		return (result);
	current_word = 0;
	i = 0;
	while (current_word < total_words)
	{
		result[current_word] = ft_next_word(s, &i, c);
		if (result[current_word++] == NULL)
			return (ft_free(result));
	}
	return (result);
}

/* int main(int argc, char **argv)
{
	char **result = ft_split(argv[1], argv[2][0]);
	int i = 0;
	if (result[0] == NULL)
		printf("nada\n");
	while (result[i] != NULL)
	{
		printf("%i - `%s`\n", i, result[i]);
		i++;
	}
	return 0;
} */
