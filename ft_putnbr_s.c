/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:42:51 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/08 16:28:14 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_s(int n, int base)
{
	char	*charset;
	size_t	length;

	charset = "0123456789";
	length = 0;
	if (n == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		length += ft_putchar('-');
		n = -n;
	}
	if (n >= base)
		length += ft_putnbr_s(n / base, base);
	length += ft_putchar(charset[n % base]);
	return (length);
}
