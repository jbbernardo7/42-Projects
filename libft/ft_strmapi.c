/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 21:56:13 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/13 22:17:24 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	unsigned int	i;
	char			*result;

	size = ft_strlen(s);
	result = malloc(size + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = f(i, s[i]);
		++i;
	}
	result[i] = '\0';
	return (result);
}
