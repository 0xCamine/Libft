/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:47:06 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/06 10:41:13 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *str, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			words++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (words);
}

static size_t	ft_wordscount(const char *str, char c)
{
	size_t	words;

	words = 0;
	while (str[words] && str[words] != c)
		words++;
	return (words);
}

static void	ft_freeptr(char **a, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		free(a[i]);
		i++;
	}
	free(a);
}

static int	ft_fill(char const *s, char **ptr, char c, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	r;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[j] && s[j] == c)
			j++;
		r = ft_wordscount(s + j, c);
		ptr[i] = ft_calloc(r + 1, sizeof(char));
		if (!ptr[i])
		{
			ft_freeptr(ptr, i);
			return (0);
		}
		r = 0;
		while (s[j] && s[j] != c)
			ptr[i][r++] = s[j++];
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**ptr;

	if (!s)
		return (NULL);
	words = ft_count(s, c);
	ptr = ft_calloc(words + 1, sizeof(char *));
	if (!ptr)
		return (NULL);
	if (!ft_norm(s, ptr, c, words))
		return (NULL);
	return (ptr);
}
