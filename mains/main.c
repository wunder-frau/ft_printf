#include "../ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

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
//	test_char(" %c %c %c \n", 'a', 'b', 'c');
//	printf(" %c %c %c \n", 'a', 'b', 'c');
//	ft_printf("MINE: '%k'\n", 'k');
//	printf("ORIG: '%k'\n", 'k');
}

void	test_str(char *s)
{
	int	len_printf;
	int	len_ft_printf;

	len_printf = printf("-->printf: '%s'\n", s);
	len_ft_printf = ft_printf("ft_printf: '%s'\n", s);
	if (len_printf != len_ft_printf)
		printf("LENGTH DOESN'T MATCH! %d != %d\n", len_printf, len_ft_printf);
}

void	test_s(void)
{
	char *str;
	printf("\n>>> ft_putSTR <<<\n\n");
	str = malloc(9);
	str[0] = 's';
	str[1] = 'o';
	str[2] = ' ';
	str[3] = 'c';
	str[4] = 'r';
	str[5] = 'i';
	str[6] = 'n';
	str[7] = 'g';
	str[8] = 'e';
	str[9] = '\0';
	test_str(NULL);
	test_str("");
	test_str(str);
	test_str("My name is Iryna! My name is Iryna! My name is Iryna! My name is Iryna! My name is Iryna! My name is Iryna! My name is Iryna!");
	test_str("-");
//	test_str("%cs%cs%c", 'c', 'b', 'a');
}


int	main (void)
{
	test_c();
	test_s();
	ft_printf(" %c %c %c \n", 'a', 'b', 'c');
	printf("\n");
	printf(" %c %c %c \n", 'a', 'b', 'c');
	ft_printf("%cs%cs%c\n", 'c', 'b', 'a');
	printf("%cs%cs%c", 'c', 'b', 'a');
}
