/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:12:31 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/01 17:46:52 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strfill(char const *s1, char const *s2, char *ptr)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s1[len])
	{
		ptr[i] = s1[len];
		i++;
		len++;
	}
	len = 0;
	while (s2[len])
	{
		ptr[i] = s2[len];
		i++;
		len++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strfill(s1, s2, ptr);
	return (ptr);
}
