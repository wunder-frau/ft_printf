/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_digit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:10:09 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/27 08:47:58 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_digit(int nb)
{
	long		l_nb;
	int			count;
	const char	*base;
	int			check;

	l_nb = nb;
	base = "0123456789";
	count = 0;
	if (l_nb < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		count++;
		l_nb = -1 * l_nb;
	}
	if (l_nb >= 10)
		count += ft_put_digit(l_nb / 10);
	{
		if (count == -1)
			return (-1);
		check = write (1, &base[l_nb % 10], 1);
		if (check == -1)
			return (-1);
		return (count += 1);
	}
}

/*int	main(void)
{
	int	n = 2147483647;
	ft_put_digit(n);
	return (0);
}*/
