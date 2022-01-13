/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuzanne <jsuzanne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:53:05 by jsuzanne          #+#    #+#             */
/*   Updated: 2022/01/13 14:48:18 by jsuzanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**mallerror(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static int	count_words(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*get_word(char *s, char c, int *index)
{
	char	*copy;
	size_t	wordlen;
	int		i;

	wordlen = 0;
	while (s[*index] == c)
		(*index)++;
	i = *index;
	while (s[i] && s[i] != c)
	{
		wordlen++;
		i++;
	}
	copy = malloc(sizeof(char) * (wordlen + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (s[*index] && s[*index] != c)
	{
		copy[i] = s[*index];
		i++;
		(*index)++;
	}
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		words;
	int		i;
	int		index;

	i = 0;
	index = 0;
	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = malloc(sizeof(char *) * (words + 1));
	while (i < words)
	{
		res[i] = get_word(s, c, &index);
		if (!res[i])
			return (mallerror(res));
		i++;
	}
	res[i] = NULL;
	return (res);
}
