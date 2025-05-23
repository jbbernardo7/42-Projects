/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:31:43 by jbelece-          #+#    #+#             */
/*   Updated: 2025/05/23 02:36:59 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexf(unsigned long number, char c)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (c != 'x')
		base = "0123456789ABCDEF";
	if (number >= 16)
		count += ft_puthexf(number / 16, c);
	count += ft_putcharf(base[number % 16]);
	return (count);
}
