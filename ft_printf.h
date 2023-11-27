/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:47:41 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/27 10:19:23 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_putchar(char c);
int	ft_put_percent(void);
int	ft_putstr(const char *s);
int	ft_put_hex_low(unsigned long n);
int	ft_put_hex_up(unsigned int n);
int	ft_put_ptr(unsigned long p);
int	ft_put_unsigned(unsigned int n);
int	ft_put_digit(int nb);
int	ft_printf(const char *format_str, ...);

#endif
