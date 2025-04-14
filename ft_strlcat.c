/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:12:20 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/12 20:38:59 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//concatenates src into dest
//until the length of the string reaches size
//(as much as it can fit into dest)
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*initial_address;
	size_t	res;

	initial_address = dest;
	while (size > 0 && *dest)
	{
		dest++;
		size--;
	}
	res = ft_strlcpy(dest, src, size);
	dest += res;
	return (dest - initial_address);
}
