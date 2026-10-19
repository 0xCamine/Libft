/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:44:09 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/18 17:55:23 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isoverlap(void *dest, const void *src, size_t nbytes)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < nbytes)
	{
		j = 0;
		while (j < nbytes)
			if (((char *)dest)[i] == ((char *)src)[j++])
				return (1);
		i++;
	}
	return (0);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (ft_isoverlap(dest, src, n))
	{
		if (dest < src)
		{
			while (i < n)
			{
				((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
				i++;
			}
			return (dest);
		}
	}
	i = n - 1;
	while (i > 0)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i--;
	}
	((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
