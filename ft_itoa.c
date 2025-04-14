/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 21:11:00 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/13 22:38:25 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//converts int to string
int	ft_get_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		++size;
	while (n != 0)
	{
		n /= 10;
		++size;
	}
	return (size);
}

char	*ft_get_result(char *result, int size, int n)
{
	while (--size >= 0 && result[size] == '\0')
	{
		result[size] = (n % 10) + 48;
		n /= 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		size;

	size = ft_get_size(n);
	result = ft_calloc(sizeof(char), size + 1);
	if (!result)
		return (0);
	if (n == -2147483648)
	{
		result[1] = '2';
		n = -147483648;
	}
	if (n < 0)
	{
		n = -n;
		result[0] = '-';
	}
	result = ft_get_result(result, size, n);
	result[size] = '\0';
	return (result);
}

/*
#include <stdio.h>
int main(void)
{
    printf("43 size: %d\n", ft_get_size(432));
    printf("-43 size: %d\n", ft_get_size(-43));
    printf("0 size: %d\n", ft_get_size(0));
    printf("result: %s\n", ft_itoa(432));
    printf("result: %s\n", ft_itoa(-432));
    printf("result: %s\n", ft_itoa(-0));
    printf("result: %s\n", ft_itoa(0));
    printf("result: %s\n", ft_itoa(123456789));
    printf("result: %s\n", ft_itoa(-2147483648));
    return (0);
}
*/
