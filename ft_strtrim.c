/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:43:28 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/01 15:26:33 by abouferr         ###   ########.fr       */
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
	size_t	end;
	size_t	size;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	end = ft_strlen(s1);
	while (i < end && ft_isexist(s1[i], set))
		i++;
	while (end > i && ft_isexist(s1[end - 1], set))
		end--;
	size = end - i;
	ptr = ft_calloc(size + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	size = 0;
	while (i < end)
	{
		ptr[size] = s1[i];
		i++;
		size++;
	}
	return (ptr);
}
