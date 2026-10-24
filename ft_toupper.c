/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouferr <abouferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 09:54:43 by abouferr          #+#    #+#             */
/*   Updated: 2026/10/20 12:04:30 by abouferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c == -1)
		return (c);
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return ((unsigned char)c - 32);
	return ((unsigned char)c);
}
