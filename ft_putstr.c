/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:24:42 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/08 16:29:02 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(const char *s)
{
	size_t	length;
	char	*null_s;

	length = 0;
	if (!s)
	{
		null_s = "(null)";
		length = ft_strlen(null_s);
		write(1, null_s, length);
	}
	else
	{
		length = ft_strlen(s);
		write(1, s, length);
	}
	return (length);
}
