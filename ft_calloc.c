/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:32:48 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/16 19:47:52 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*address;
	size_t			i;
	size_t			j;

	address = malloc(nmemb * size);
	if (address == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		j = 0;
		while (j < size)
		{
			address[i + j] = 0;
			j++;
		}
		i = i + size;
	}
	return (((void *)address));
}
