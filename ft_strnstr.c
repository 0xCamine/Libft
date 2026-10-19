/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:57:38 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/16 19:55:45 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	b_len;

	b_len = 0;
	i = 0;
	j = 0;
	if (!little[0])
		return ((char *)big);
	while (little[b_len])
		b_len++;
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && i + j < len)
			j++;
		if (j == b_len)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
