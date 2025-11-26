/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:08:49 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/11/24 11:01:55 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	unsigned long long	pointer;
	int					count;

	count = 0;
	pointer = (unsigned long long)ptr;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	count += print_string("0x");
	count += print_hex_recursive(pointer, "0123456789abcdef");
	return (count);
}

// int	main(void)
// {
// 	int	x;
// 	void *ptr = &x;

// 	int printed = print_pointer(ptr);
// 	print_char(printed);
// 	return (0);
// }