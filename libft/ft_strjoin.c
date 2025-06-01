/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 01:12:38 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/13 01:21:32 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	stringLen;
	char	*result;
	char	*str;

	stringLen = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *) malloc((stringLen) * sizeof(char));
	if (!str)
		return (0);
	result = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = 0;
	return (result);
}
