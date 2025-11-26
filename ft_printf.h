/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:44:21 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/11/20 17:41:09 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	print_char(char c);
int	print_string(char *s);
int	print_pointer(void *ptr);
int	print_integer(int n);
int	print_unsigned(unsigned int n);
int	print_hex(unsigned int n, char letter);
int	print_percent(void);
int	print_decimal(int n);
int	print_hex_recursive(unsigned long n, char *base);

#endif