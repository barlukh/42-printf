/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:58:29 by bgazur            #+#    #+#             */
/*   Updated: 2025/05/08 16:29:52 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

# define BASE10 10
# define BASE16 16
# define DIGIT 0
# define LOWERCASE 1
# define UPPERCASE 2

/** Writes a string with format specifiers into the standard output
 * @param str String to write
 * @param ... Additional variadic arguments matching format specifiers
 * @return Length of the character
 */
int		ft_printf(const char *str, ...);

/** Writes a charater into the standard output
 * @param c Character to write
 * @return Length of the character
 */
size_t	ft_putchar(int c);

/** Writes a memory address of a pointer into the standard output
 * @param p Memory address to write (represented as an integer)
 * @param base Base of the integer
 * @return Length of the integer
 */
size_t	ft_putnbr_p(uintptr_t p, size_t base);

/** Writes a signed integer into the standard output
 * @param n Integer to write
 * @param base Base of the integer
 * @return Length of the integer
 */
size_t	ft_putnbr_s(int n, int base);

/** Writes an unsigned integer into the standard output
 * @param n Integer to write
 * @param base Base of the integer
 * @param style Style format indicator for hexadecimal letters
 * @return Length of the integer
 */
size_t	ft_putnbr_u(unsigned int n, unsigned int base, int style);

/** Writes a string into the standard output
 * @param s String to write
 * @return Length of the string
 */
size_t	ft_putstr(const char *s);

/** Counts the length of a string
 * @param s String to determine the length of
 * @return Length of the string
 */
size_t	ft_strlen(const char *s);

#endif
