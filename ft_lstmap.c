/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:23:16 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/27 18:37:03 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*list;

	if (!lst || !f || !del)
		return (NULL);
	list = lst;
	new_list = ft_lstnew(f(list->content));
	if (!new_list)
		return (NULL);
	list = list->next;
	while (list)
	{
		new_list->next = ft_lstnew(f(list->content));
		if (new_list->next == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		list = list->next;
	}
	return (new_list);
}
