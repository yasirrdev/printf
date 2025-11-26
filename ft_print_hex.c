/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:16:38 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/11/20 17:39:20 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int n, char letter)
{
	int		count;
	char	*base;

	count = 0;
	if (letter == 'x')
		base = "0123456789abcdef";
	else if (letter == 'X')
		base = "0123456789ABCDEF";
	else
		return (0);
	if (n >= 16)
		count += print_hex(n / 16, letter);
	count += print_char(base[n % 16]);
	return (count);
}
