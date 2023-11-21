#include "../ft_printf.h"
#include <stdio.h>

void	test_char(char c)
{
	int	len_printf;
	int	len_ft_printf;

	len_printf = printf("-->printf: '%c'\n", c);
	len_ft_printf = ft_printf("ft_printf: '%c'\n", c);
	if (len_printf != len_ft_printf)
		printf("LENGTH DOESN'T MATCH! %d != %d\n", len_printf, len_ft_printf);
}

void	test_c(void)
{
	printf("\n>>> ft_putCHAR <<<\n\n");
	test_char('%');
	test_char('\0');
	test_char(100);
	test_char(55);
//	test_char('0' - 256);
//	test_char('0' + 256);
	test_char(' ');
	test_char(0);
	printf(" %c %c %c \n", 'a', 'b', 'c');
	ft_printf(" %c %c %c \n", 'a', 'b', 'c');
	printf(" %c %c %c \n", 'a', 'b', 'c');
//	ft_printf("MINE: '%k'\n", 'k');
//	printf("ORIG: '%k'\n", 'k');
}



int	main (void)
{
	test_c();
}
