/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 22:56:20 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/12 23:02:36 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//almost the same as strncmp
//returns the difference between two memory blocks
//up until it reaches n bytes
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *) s1;
	st2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (*st1 == *st2 && n-- > 1)
	{
		++st1;
		++st2;
	}
	return (*st1 - *st2);
}
