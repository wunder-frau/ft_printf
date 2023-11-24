/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:32:03 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/24 14:52:22 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_spec(const char input_val, va_list args)
{
	int	i;

	i = 0;
	if (input_val == 'c')
		i += (ft_putchar(va_arg(args, int)));
	else if (input_val == '%')
		i += (ft_putchar(input_val));
	else if (input_val == 's')
		i += (ft_putstr(va_arg(args, char *)));
	else if (input_val == 'x')
		i += (ft_put_hex_low(va_arg(args, unsigned int)));
	else if (input_val == 'X')
		i += (ft_put_hex_up(va_arg(args, unsigned int)));
	else if (input_val == 'p')
		i += (ft_put_ptr(va_arg(args, unsigned long)));
	else if (input_val == 'u')
		i += (ft_put_unsigned(va_arg(args, unsigned long)));
	return (i);
}

static int	ft_form(const char *f_s, va_list args)
{
	int	len;
	int	len_temp;

	len = 0;
	while (*f_s)
	{
		if (*f_s == '%')
		{
			++f_s;
			len_temp = ft_handle_spec(*f_s, args);
			if (len_temp < 0)
				return (-1);
			len += len_temp;
		}
		else
		{
			if (ft_putchar(*f_s) < 0)
				return (-1);
			len++;
		}
		f_s++;
	}
	return (len);
}

int	ft_printf(const char *f_s, ...)
{
	va_list	args;
	int		len;

	va_start(args, f_s);
	len = ft_form(f_s, args);
	va_end(args);
	return (len);
}
