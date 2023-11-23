/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_up.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:39:40 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/23 13:43:06 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex_up(unsigned int n)
{
	int			count;
	const char	*base;
	int			c;

	base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count = ft_put_hex_up(n / 16);
	if (count == -1)
		return (-1);
	c = write (1, &base[n % 16], 1);
	if (c == -1)
		return (-1);
	count++;
	return (count);
}
