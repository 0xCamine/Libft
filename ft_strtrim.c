/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:43:28 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/17 12:44:09 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isexist(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	index;
	size_t	len;
	char	*ptr;

	i = 0;
	index = 0;
	len = ft_strlen(s1);
	ptr = ft_calloc(len, sizeof(char));
	if (!ptr)
		return (NULL);
	while (ft_isexist(s1[i], set))
		i++;
	if (i == len)
		return (ptr);
	len = len - 1;
	while (ft_isexist(s1[len], set))
		len--;
	while (i <= len)
	{
		ptr[index] = s1[i];
		index++;
		i++;
	}
	return (ptr);
}
