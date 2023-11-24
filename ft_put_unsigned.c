/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:40:22 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/24 14:33:03 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned(unsigned int n)
{
    if (n < 10)
        return (ft_putchar('0' + n));
    else
        return (ft_put_unsigned(n / 10) + ft_putchar('0' + n % 10));
}
