/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:42:51 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/06 12:12:50 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t  ft_putnbr(int n)
{
    size_t  length;

    length = 0;
    if (n == INT_MIN)
        return (ft_putstr("-2147483648"));
    if (n < 0)
    {
        length += ft_putchar('-');
        n = -n;
    }
    if (n > 9)
        length += ft_putnbr(n / 10);
    length += ft_putchar('0' + (n % 10));
    
    return (length);
}
