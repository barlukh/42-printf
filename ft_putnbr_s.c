/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:42:51 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/09 12:05:17 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_s(int n, int base, int *len, int *err)
{
	char	*charset;
	int		length;

	charset = "0123456789";
	length = 0;
	if (n == INT_MIN)
		ft_putstr("-2147483648", len, err);
	if (n < 0)
	{
		ft_putchar('-', len, err);
		n = -n;
	}
	if (n >= base)
		ft_putnbr_s(n / base, base, len, err);
	ft_putchar(charset[n % base], len, err);
}
