/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:24:42 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/09 12:14:13 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *s, int *len, int *err)
{
	size_t		i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i] != '\0')
	{
		ft_putchar(s[i], len, err);
		i++;
	}
}
