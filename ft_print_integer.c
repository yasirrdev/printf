/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:48:38 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/11/19 16:55:24 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_integer(int n)
{
	long int	temp;
	int			count;
	char		c;

	temp = n;
	count = 0;
	if (temp < 0)
	{
		temp = temp * -1;
		write(1, "-", 1);
		count++;
	}
	if (temp > 9)
		count += print_integer(temp / 10);
	c = (temp % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
