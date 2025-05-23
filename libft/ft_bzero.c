/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 22:22:45 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/11 22:26:04 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//sets n bytes to 0 in s
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*l;

	l = s;
	while (n-- > 0)
		*l++ = 0;
}
