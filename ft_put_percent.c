#include "ft_printf.h"

int	ft_put_percent(void)
{
	int	check;

	check = write (1, "%", 1);
	if (check == -1)
		return (-1);
	return (1);
}
