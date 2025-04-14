/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 23:05:06 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/12 23:10:37 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns a pointer to a substring in a string
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str;
	size_t	little_len;

	str = (char *) big;
	if (*little == 0)
		return (str);
	little_len = ft_strlen(little);
	while (*str && little_len <= len)
	{
		if (ft_strncmp(str, little, little_len) == 0)
			return (str);
		++str;
		--len;
	}
	return (0);
}
