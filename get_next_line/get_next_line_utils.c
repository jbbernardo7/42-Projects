/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:28:33 by jbelece-          #+#    #+#             */
/*   Updated: 2025/06/03 22:44:52 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char) c;
	while (*s)
	{
		if (*s == chr)
			return ((char *) s);
		++s;
	}
	if (chr == '\0')
		return ((char *) s);
	return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (str[c])
		++c;
	return (c);
}

size_t	ft_linelen(const char *str)
{
	size_t	c;

	c = 0;
	while (str[c] && str[c] != '\n')
		++c;
	if (str[c] == '\n')
		++c;
	return (c);
}

char	*ft_queuejoin(char *queue, const char *buffer)
{
	size_t	stringlen;
	char	*result;
	char	*str;
	char	*old_queue;

	if (!queue)
	{
		queue = malloc(1);
		if (!queue)
			return (NULL);
		*queue = '\0';
	}
	stringlen = ft_strlen(queue) + ft_strlen(buffer) + 1;
	str = malloc(stringlen);
	if (!str)
		return (NULL);
	result = str;
	old_queue = queue;
	while (*queue)
		*str++ = *queue++;
	while (*buffer)
		*str++ = *buffer++;
	*str = '\0';
	free(old_queue);
	return (result);
}
