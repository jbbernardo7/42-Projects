/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 01:24:04 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/11 01:25:09 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns the size of a string
size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (str[c])
		++c;
	return (c);
}
