/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:52:18 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/11/19 16:46:22 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_decimal(int n)
{
	long	temp;
	int		count;

	temp = n;
	if (temp < 0)
	{
		write(1, '-', 1);
		count++;
		temp *= -1;
	}
	if (temp > 9)
		count += print_decimal(temp / 10);
	write(1, (temp % 10) + '0', 1);
	count++;
	return (count);
}
