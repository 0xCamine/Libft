/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:31:37 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/22 17:14:10 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || s1 == s2)
		return (0);
	while (i < n
		&& (((const unsigned char *)s1)[i] == ((const unsigned char *)s2)[i]))
		i++;
	return (((const unsigned char *)s1)[i] - ((const unsigned char *)s2)[i]);
}
