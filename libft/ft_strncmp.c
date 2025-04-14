/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 22:31:42 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/12 22:34:53 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns the difference between two strings
//up to n characters or when \0 is found
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *) s1;
	st2 = (unsigned char *) s2;
	if (!n)
		return (0);
	while (*st1 && *st1 == *st2 && n > 1)
	{
		++st1;
		++st2;
		--n;
	}
	return (*st1 - *st2);
}
