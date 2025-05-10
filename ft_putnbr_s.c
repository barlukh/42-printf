/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:42:51 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/10 16:27:55 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_s(int n, int base)
{
	const char	*charset;
	int			count;

	charset = "0123456789";
	count = 0;
	if (n == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		if (ft_putchar('-') < 1)
			return (-1);
		count++;
		n = -n;
	}
	if (n >= base)
		count += ft_putnbr_s(n / base, base);
	if (ft_putchar(charset[n % base]) < 1)
		return (-1);
	count++;
	return (count);
}
