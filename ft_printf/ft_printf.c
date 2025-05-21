/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:21:19 by jbelece-          #+#    #+#             */
/*   Updated: 2025/05/21 17:08:14 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

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

static void	convert(va_list arg, char format)
{
	if (format == 'c')
	{
		ft_putchar(va_arg(arg, char));
	}
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;
	char	conversions[11];

	count = 0;
	conversions = "cspdiuxX%";
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && ft_strchr(allowed, *(format + 1)))
		{
			convert(args, *(format + 1));
		}
		else
			ft_putchar(*format);
		++format;
	}
	va_end(args);
	return (0);
}

//test
int	main(void)
{
	ft_printf("Hello this is a test");
}
