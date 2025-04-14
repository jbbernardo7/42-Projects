/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 02:19:08 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/14 03:43:12 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*helper;

	while (*lst)
	{
		helper = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = helper;
	}
	*lst = NULL;
}
