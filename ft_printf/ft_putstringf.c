/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstringf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 02:11:54 by jbelece-          #+#    #+#             */
/*   Updated: 2025/05/22 02:52:38 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstringf(char *c)
{
	int	count;

	count = 0;
	while (*c)
		count += ft_putcharf(*c++);
	return (count);
}
