/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:42:51 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/09 15:33:08 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_s(int n, int base, t_out *outp)
{
	const char	*charset;

	charset = "0123456789";
	if (n == INT_MIN)
	{
		ft_putstr("-2147483648", outp);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', outp);
		n = -n;
	}
	if (n >= base)
		ft_putnbr_s(n / base, base, outp);
	ft_putchar(charset[n % base], outp);
}
