/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 23:18:57 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/12 20:17:42 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies n bytes of src into dest
//(same as memcpy but also handles memory overlap)
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_str;
	unsigned const char	*src_str;

	if (dest == src)
		return (dest);
	if (dest <= src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		dest_str = dest;
		src_str = src;
		while (n--)
			dest_str[n] = src_str[n];
	}
	return (dest);
}
