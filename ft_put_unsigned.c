/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:40:22 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/26 16:42:18 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned(unsigned int n)
{
	int	check;
	int	count;

    count = 0;
	if (n >= 10)
		count  = ft_put_unsigned(n / 10);
	if (count == -1)
			return (-1);
	check = write (1, &base[n % 10])
        return (check);
	}
    else
	{
		check_rem = ft_putchar('0' + n % 10
        return (ft_put_unsigned(n / 10) + ft_putchar('0' + n % 10));
}
