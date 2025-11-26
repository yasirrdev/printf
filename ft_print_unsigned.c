/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:08:11 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/11/19 16:50:48 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	unsigned long	temp;
	int				count;
	char			c;

	temp = n;
	count = 0;
	if (temp > 9)
		count += print_unsigned(temp / 10);
	c = (temp % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
