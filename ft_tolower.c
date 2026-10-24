/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 09:40:27 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/20 12:04:35 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c == -1)
		return (c);
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return ((unsigned char)c + 32);
	return ((unsigned char)c);
}
