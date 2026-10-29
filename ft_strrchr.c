/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:24:42 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/29 12:04:20 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	if ((char)c == 0)
		return ((char *)s + i);
	while (i-- > 0)
	{
		if ((char)s[i] == (char)c)
			return ((char *)s + i);
	}
	return (NULL);
}
