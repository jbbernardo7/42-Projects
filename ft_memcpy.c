/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 22:58:00 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/11 23:02:03 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies n bytes of src into dest
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_str;
	unsigned const char	*src_str;

	if (dest == src)
		return (dest);
	dest_str = dest;
	src_str = src;
	while (n-- > 0)
		*dest_str++ = *src_str++;
	return (dest);
}
