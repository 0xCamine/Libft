/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:47:06 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/18 17:54:26 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(const char *str, char c)
{
	size_t	i;
	size_t	words;
	int		is_word;

	words = 0;
	i = 0;
	is_word = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i])
		{
			is_word = 1;
			i++;
		}
		if (is_word)
		{
			words++;
			is_word = 0;
		}
	}
	return (words);
}

size_t	ft_wordscount(const char *str, char c)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 0;
	while (str[i] && str[i] != c)
	{
		words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	size_t	i;
	char	**ptr;
	size_t	words;
	size_t	r;

	words = ft_count(s, c);
	ptr = ft_calloc(words + 1, sizeof(char *));
	i = 0;
	j = 0;
	if (!ptr)
		return (NULL);
	while (i < words)
	{
		r = 0;
		while (s[j] == c && s[j])
			j++;
		ptr[i] = ft_calloc(ft_wordscount(s + j, c) + 1, sizeof(char));
		while (s[j] != c && s[j])
			ptr[i][r++] = s[j++];
		i++;
	}
	return (ptr);
}
