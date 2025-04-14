/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 00:41:39 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/13 00:48:47 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//duplicates a string
char	*ft_strdup(const char *s)
{
	char	*result;
	size_t	len;

	len = ft_strlen(s) + 1;
	result = malloc(len);
	if (result)
		ft_memcpy(result, s, len);
	return (result);
}
