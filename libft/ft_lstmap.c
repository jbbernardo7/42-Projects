/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <jbelece-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 02:45:00 by jbelece-          #+#    #+#             */
/*   Updated: 2025/04/14 03:43:31 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*dummy;
	void	*ncontent;

	result = 0;
	while (lst)
	{
		ncontent = f(lst->content);
		dummy = ft_lstnew(ncontent);
		if (!dummy)
		{
			del(ncontent);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, dummy);
		lst = lst->next;
	}
	return (result);
}
