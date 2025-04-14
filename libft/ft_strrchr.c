/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 22:26:06 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/12 22:35:28 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns a pointer of the last occurrence of c
//in a string
char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	chr;

	ptr = 0;
	chr = (char) c;
	while (*s)
	{
		if (*s == chr)
			ptr = (char *) s;
		s++;
	}
	if (chr == 0)
		ptr = (char *) s;
	return (ptr);
}
