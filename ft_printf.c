/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:32:03 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/21 10:15:57 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_spec(const char *input_val, va_list args)
{
	if (*input_val == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*input_val == '%')
		return (ft_putchar('%'));
	return (0);
}

static int	ft_handle_format(const char *format_str, va_list args)
{
	int	len;
	int	len_temp;

	len = 0;
	len_temp = 0;
	while (*format_str)
	{
		if (*format_str == '%' && ft_handle_spec(format_str + 1, args) != 0)
		{
			len_temp = ft_handle_spec(format_str + 1, args);
			if (len_temp < 0)
				return (-1);
			len += len_temp;
		}
	else
	{
		if (ft_putchar(*format_str) < 0)
			return (-1);
		len++;
	}
	format_str++;
}
	return (len);
}

int	ft_printf(const char *format_str, ...)
{
	va_list	args;
	int		len;

	va_start(args, format_str);
	len = ft_handle_format(format_str, args);
	va_end(args);
	return (len);
}
