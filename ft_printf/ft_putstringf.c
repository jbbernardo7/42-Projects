/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstringf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 02:11:54 by jbelece-          #+#    #+#             */
/*   Updated: 2025/05/23 02:50:27 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstringf(char *c)
{
	int	count;

	if (!c)
		return (ft_putstringf("(null)"));
	count = 0;
	while (*c)
		count += ft_putcharf(*c++);
	return (count);
}
