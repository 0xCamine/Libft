/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 09:28:37 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/04 09:42:36 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	number;

	sign = 1;
	i = 0;
	number = 0;
	while (ft_iswhitespace(nptr[i]) && nptr[i])
		i++;
	if ((nptr[i] == '-') || (nptr[i] == '+' && nptr[i]))
	{
		if (nptr[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (nptr[i] == 48)
		i++;
	while (ft_isdigit(nptr[i]) && nptr[i])
	{
		number = (number * 10) + nptr[i] - 48;
		i++;
	}
	return (number * sign);
}
