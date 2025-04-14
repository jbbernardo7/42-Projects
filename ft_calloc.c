/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 00:36:54 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/13 00:39:48 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//allocates (nmemb * size) bytes of memory
//and initializes all bytes to 0
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	space;

	space = nmemb * size;
	ptr = malloc(space);
	if (ptr)
		ft_bzero(ptr, space);
	return (ptr);
}
