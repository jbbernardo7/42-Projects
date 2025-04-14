/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 23:12:27 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/12 23:28:16 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//converts digits in a string to integer
int	ft_atoi(const char *nptr)
{
	int	signal;
	int	result;

	signal = 1;
	result = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		++nptr;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			signal = -signal;
		++nptr;
	}
	while (ft_isdigit(*nptr))
	{
		result *= 10;
		result += (*nptr - 48);
		++nptr;
	}
	return (result * signal);
}
