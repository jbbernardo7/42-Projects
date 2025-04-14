/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:55:12 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/14 04:07:52 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(char *seps, char c)
{
	int	i;

	i = 0;
	while (seps[i])
	{
		if (seps[i] == c)
			return (1);
		++i;
	}
	return (0);
}

int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++count;
		while (*s && *s != c)
			++s;
	}
	return (count);
}

char	*get_word(char const *s, char c)
{
	int		size;
	char	*word;

	size = 0;
	while (s[size] && s[size] != c)
		++size;
	++size;
	word = malloc(sizeof(char) * (size));
	if (!word)
		return (0);
	ft_strlcpy(word, s, size);
	return (word);
}

void	free_words(char **words, int n)
{
	while (n > 0)
		free(words[--n]);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		itr;

	words = (count_words(s, c));
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (0);
	itr = 0;
	while (itr < words)
	{
		while (*s && *s == c)
			++s;
		result[itr] = get_word(s, c);
		if (!result[itr])
		{
			free_words(result, itr);
			return (NULL);
		}
		while (*s && *s != c)
			++s;
		itr++;
	}
	result[itr] = 0;
	return (result);
}
