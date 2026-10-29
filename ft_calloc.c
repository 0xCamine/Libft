/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:32:48 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/29 13:48:26 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*address;
	size_t			i;
	size_t			alloc_size;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	alloc_size = nmemb * size;
	address = malloc(alloc_size);
	if (address == NULL)
		return (NULL);
	i = 0;
	while (i < alloc_size)
	{
		address[i] = 0;
		i++;
	}
	return ((void *)address);
}
