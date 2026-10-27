/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:20:45 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/26 14:46:18 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;
	t_list			*address;

	if (!lst)
		return (0);
	address = lst;
	i = 0;
	while (address != NULL)
	{
		address = address->next;
		i++;
	}
	return (i);
}
