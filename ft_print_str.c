/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:48:17 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/11/19 17:17:46 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (print_string("(null)"));
	while (s[i])
	{
		print_char(s[i]);
		i++;
	}
	return (i);
}
