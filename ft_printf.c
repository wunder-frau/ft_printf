/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:32:03 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/21 13:07:28 by istasheu         ###   ########.fr       */
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
		i += (ft_putchar('%'));
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
			len_temp = ft_handle_spec(*++f_s, args);
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