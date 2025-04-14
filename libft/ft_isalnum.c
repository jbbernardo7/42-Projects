/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 23:55:03 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/10 23:55:55 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//checks if int is alpha or number
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
