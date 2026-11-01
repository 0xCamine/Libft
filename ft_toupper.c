/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 09:54:43 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/01 14:33:03 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c == -1)
		return (c);
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return ((unsigned char)c - 32);
	return ((unsigned char)c);
}
