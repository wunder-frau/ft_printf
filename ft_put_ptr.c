/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:42:48 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/23 16:34:22 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(unsigned int p)
{
	int count;
	
	count = (write(1, "0x", 2) + ft_put_hex_low(p));
	if (count == -1)
		return (-1);
	return (count);
}
