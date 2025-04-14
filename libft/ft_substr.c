/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 00:48:04 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/14 03:30:04 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//duplicates a substring
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*result;
	size_t			strlen;
	unsigned int	rest;

	if (!s)
		return (0);
	strlen = ft_strlen(s);
	if (start > strlen)
		return (ft_strdup(""));
	rest = ft_strlen(s + start);
	if (len > rest)
		len = rest;
	result = (char *) malloc(sizeof(char) * (++len));
	if (result)
		ft_strlcpy(result, s + start, len);
	return (result);
}
