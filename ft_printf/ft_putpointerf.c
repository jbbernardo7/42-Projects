/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointerf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 02:53:28 by jbelece-          #+#    #+#             */
/*   Updated: 2025/05/22 17:48:21 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointerf(void *ptr)
{
	unsigned long	address;
	int				count;

	address = (unsigned long) ptr;
	count = 0;
	if (!address)
	{
		count += ft_putstringf("(nil)");
		return (count);
	}
	count += ft_putstringf("0x");
	count += ft_puthexf(address, 'x');
	return (count);
}
