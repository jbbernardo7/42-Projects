/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:01:42 by jbelece-          #+#    #+#             */
/*   Updated: 2025/05/23 01:59:21 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putcharf(char c);
int		ft_putstringf(char *s);
int		ft_puthexf(unsigned long number, char c);
int		ft_putpointerf(void *ptr);
int		ft_putnumberf(int number);
int		ft_putunumberf(unsigned int number);
int		ft_printf(const char *format, ...);

#endif
