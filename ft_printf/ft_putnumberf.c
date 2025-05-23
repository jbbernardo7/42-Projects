/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumberf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 18:38:55 by jbelece-          #+#    #+#             */
/*   Updated: 2025/05/23 02:01:32 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumberf(int number)
{
	int	count;

	count = 0;
	if (number == -2147483648)
		count += ft_putstringf("-2147483648");
	else
	{
		if (number < 0)
		{
			count += ft_putcharf('-');
			number = -number;
		}
		if (number >= 10)
		{
			count += ft_putnumberf(number / 10);
		}
		count += ft_putcharf((number % 10) + '0');
	}
	return (count);
}
