/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:42:48 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/27 09:00:52 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(unsigned long p)
{
	int	count;
	int	wr_val;

	count = 0;
	wr_val = write(1, "0x", 2);
	if (wr_val == -1)
		return (-1);
	count = (wr_val + ft_put_hex_low(p));
	if (count == -1)
		return (-1);
	return (count);
}
