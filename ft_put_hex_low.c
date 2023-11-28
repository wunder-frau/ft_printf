/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_low.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:18:27 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/25 15:40:15 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex_low(unsigned long n)
{
	int			count;
	const char	*base;
	int			c;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count = ft_put_hex_low(n / 16);
	if (count == -1)
		return (-1);
	c = write (1, &base[n % 16], 1);
	if (c == -1)
		return (-1);
	return (count + 1);
}
