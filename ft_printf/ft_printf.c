/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:21:19 by jbelece-          #+#    #+#             */
/*   Updated: 2025/05/23 02:37:40 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char) c;
	while (*s)
	{
		if (*s == chr)
			return ((char *) s);
		++s;
	}
	if (chr == '\0')
		return ((char *) s);
	return (0);
}

static int	convert(va_list arg, char format)
{
	if (format == 'c')
		return (ft_putcharf(va_arg(arg, int)));
	else if (format == 's')
		return (ft_putstringf(va_arg(arg, char *)));
	else if (format == 'p')
		return (ft_putpointerf(va_arg(arg, void *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnumberf(va_arg(arg, int)));
	else if (format == 'u')
		return (ft_putunumberf(va_arg(arg, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_puthexf(va_arg(arg, unsigned int), format));
	return (ft_putcharf(format));
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && ft_strchr("cspdiuxX%", *(format + 1)))
			count += convert(args, *(++format));
		else
			count += ft_putcharf(*format);
		++format;
	}
	va_end(args);
	return (count);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	test[120];
	int		diff = 0;

	//No args
	strcpy(test, "Hello this is a test.\n");
	diff += ft_printf(test);
	diff -= printf(test);
	printf("Return difference: %d\n\n", diff);

	//Char arg
	strcpy(test, "Hello this is a 'Z': '%c'.\n");
	diff += ft_printf(test, 'Z');
	diff -= printf(test, 'Z');
	printf("Return difference: %d\n\n", diff);

	//String arg
	strcpy(test, "Hello this is a ' _# - a string - #_ ': '%s'.\n");
	diff += ft_printf(test, " _# - a string - #_ ");
	diff -= printf(test, " _# - a string - #_ ");
	printf("Return difference: %d\n\n", diff);

	//Pointer arg
	strcpy(test, "Hello this is a pointer address: '%p'.\n");
	diff += ft_printf(test, &test);
	diff -= printf(test, &test);
	printf("Return difference: %d\n\n", diff);

	//Integer
	strcpy(test, "Hello this is a -731: '%d'.\n");
	diff += ft_printf(test, -731);
	diff -= printf(test, -731);
	printf("Return difference: %d\n\n", diff);

	//Unsigned Integer
	strcpy(test, "Hello this is a 1442: '%d'.\n");
	diff += ft_printf(test, 1442);
	diff -= printf(test, 1442);
	printf("Return difference: %d\n\n", diff);

	//Lowercase hexadecimal
	strcpy(test, "Hello this is a 7abc7: '%x'.\n");
	diff += ft_printf(test, 502727);
	diff -= printf(test, 502727);
	printf("Return difference: %d\n\n", diff);

	//Percentage
	strcpy(test, "Hello this is a %%\n");
	diff += ft_printf(test);
	diff -= printf(test);
	printf("Return difference: %d\n\n", diff);

	//Test
	strcpy(test, "Hello this is a %%z \n");
	diff += ft_printf(test);
	diff -= printf(test);
	printf("Return difference: %d\n\n", diff);
	return (0);
}*/
