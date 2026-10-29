/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:02:03 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/29 16:17:24 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenint(int c)
{
	int		i;
	long	nb;

	nb = c;
	i = 1;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

void	ft_handlers(char *ptr, int n)
{
	int		i;
	char	*int_min;

	int_min = "-2147483648";
	i = 0;
	if (n == 0)
	{
		ptr[0] = '0';
		return ;
	}
	while (i < 11)
	{
		ptr[i] = int_min[i];
		i++;
	}
}

void	ft_strput(char *ptr, int n, int i)
{
	while (n > 0 && i >= 0)
	{
		ptr[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = ft_lenint(n);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	if (n == -2147483648 || n == 0)
	{
		ft_handlers(ptr, n);
		return (ptr);
	}
	if (n < 0)
	{
		n = n * -1;
		ptr[0] = '-';
	}
	ft_strput(ptr, n, len - 1);
	return (ptr);
}
