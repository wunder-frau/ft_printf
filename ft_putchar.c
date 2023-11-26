/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 08:38:13 by istasheu          #+#    #+#             */
/*   Updated: 2023/11/20 14:36:43 by istasheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	check;

	check = write (1,&c, 1);
	if (check == -1)
		return (-1);
	return (1);
}

/*int main(void)
{
	    ft_printf("%c%c%c\n", 'a', '\t', 'b');
	    ft_printf("%cs%cs%c", 'c', 'b', 'a');

	        return 0;
}*/
