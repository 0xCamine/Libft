/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:02:56 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/19 16:12:02 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	l;

	l = 1;
	while (n >= 10)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

// 123 / 10

//   123
// 12
// 1

int	ft_divbyindex(int n, int i)
{
	int	div;

	div = 0;
	while (div < i)
	{
		n = n / 10;
		div++;
	}
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	nb;

	nb = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = n * (-1);
		write(fd, "-", 1);
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	nb = (n % 10) + 48;
	write(fd, &nb, 1);
	return ;
}
