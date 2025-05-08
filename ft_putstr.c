/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:24:42 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/08 07:45:34 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/** Writes a string into the standard output
 * @param s String to write
 * @return Length of the string
 */
size_t	ft_putstr(char *s)
{
	size_t	length;
	char 	*null_s;

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
