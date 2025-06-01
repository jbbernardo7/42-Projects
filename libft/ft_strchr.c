/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:31:24 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/12 22:22:55 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns a pointer to the first occurrence
//of a char c in a string
char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char) c;
	while (*s)
	{
		if (*s == chr)
			return ((char *) s);
		++s;
	}
	if (chr == '\0')
		return ((char *) s);
	return (0);
}
