/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:32:48 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/08 18:53:26 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*address;
	size_t			i;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	address = malloc(nmemb * size);
	if (address == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		address[i] = 0;
		i++;
	}
	return ((void *)address);
}
