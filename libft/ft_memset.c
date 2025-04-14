/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 22:05:28 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/11 22:09:17 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//sets the value of c into the first n bytes of str
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*l;

	l = str;
	while (n-- > 0)
		*l++ = (unsigned char) c;
	return (str);
}
