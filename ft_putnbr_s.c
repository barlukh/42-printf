/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:42:51 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/11 09:02:32 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_s(int n)
{
	int			count;

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
	if (n >= BASE10)
		count += ft_putnbr_s(n / BASE10);
	if (ft_putchar(DECIMAL[n % BASE10]) < 1)
		return (-1);
	count++;
	return (count);
}
