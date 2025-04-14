/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 22:46:47 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/12 22:54:30 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//same as strnchr but looks for a byte in memory
//instead of a character in a string
//(does not consider null character)
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n--)
	{
		if (*ptr == (unsigned char) c)
			return (ptr);
		ptr++;
	}
	return (0);
}
