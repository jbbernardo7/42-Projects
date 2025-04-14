/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 00:10:18 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/12 00:21:05 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies 'size' chars of src into dest
//if size >= length(src) then copy full src and then stop
//returns the full length of src
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char	*initial_address;

	initial_address = src;
	if (size > 0)
	{
		while (--size && *src)
			*dest++ = *src++;
		*dest = '\0';
	}
	while (*src)
		src++;
	return (src - initial_address);
}
