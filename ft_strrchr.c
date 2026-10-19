/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:24:42 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/16 20:22:33 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			index = i + 1;
		i++;
	}
	if (index)
		return ((char *)s + (index - 1));
	return (NULL);
}
