/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 09:40:27 by abouferr          #+#    #+#             */
/*   Updated: 2026/11/01 14:33:09 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c == -1)
		return (c);
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return ((unsigned char)c + 32);
	return ((unsigned char)c);
}
