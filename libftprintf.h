/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:58:29 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/07 11:18:35 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <unistd.h>

# define DIGIT 0
# define LOWERCASE 1
# define UPPERCASE 2

int		ft_printf(const char *str, ...);
size_t	ft_putchar(int c);
size_t	ft_putnbr(int n, int base, int style);
size_t	ft_putstr(char *s);
size_t	ft_strlen(const char *s);

#endif
