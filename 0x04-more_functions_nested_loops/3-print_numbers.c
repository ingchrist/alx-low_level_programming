#include <stdio.h>
/**
 * print_numbers - prints the numbers or digits 1-9
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		++i;
	}
	putchar('\n');
}
