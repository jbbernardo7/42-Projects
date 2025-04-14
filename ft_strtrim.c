/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:50:14 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/13 21:06:56 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ischars(const char c, const char *chars)
{
	while (*chars)
	{
		if (*chars == c)
			return (1);
		++chars;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		size;
	char	*result;

	while (ft_ischars(*s1, set))
		++s1;
	size = ft_strlen(s1);
	if (size == 0)
		return (ft_strdup(""));
	while (ft_ischars(s1[size - 1], set))
		--size;
	result = (char *) malloc(size + 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s1, size + 1);
	return (result);
}
