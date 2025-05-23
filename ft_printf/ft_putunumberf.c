/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunumberf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 01:59:53 by jbelece-          #+#    #+#             */
/*   Updated: 2025/05/23 02:04:20 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunumberf(unsigned int number)
{
	int	count;

	count = 0;
	if (number >= 10)
		count += ft_putunumberf(number / 10);
	count += ft_putcharf((number % 10) + '0');
	return (count);
}
