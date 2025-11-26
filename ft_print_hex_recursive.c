/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_recursive.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:11:36 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/11/18 18:27:21 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_recursive(unsigned long n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += print_hex_recursive(n / 16, base);
	count += print_char(base[n % 16]);
	return (count);
}
/*
int	main (void)
{
	int	printed;

	printed = print_hex_recursive(255, "0123456789abcdef");
	write(1, "\n", 1);
}
*/