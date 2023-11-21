#include "../ft_printf.h"
#include <stdio.h>

void	test_char(char c)
{
	int	len_orig;
	int	len_mine;

	len_orig = printf("ORIG: '%c'", c);
	printf("\n");
	len_mine = ft_printf("MINE: '%c'", c);
	printf("\n");
	if (len_orig != len_mine)
		printf("LENGTH DOESN'T MATCH! %d != %d\n", len_orig, len_mine);
}

void	test_c(void)
{
	printf("\n--- C TEST ---\n\n");
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
