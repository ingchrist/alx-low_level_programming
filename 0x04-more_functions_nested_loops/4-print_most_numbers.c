#include <stdio.h>

/**
 * print_most_numbers - print each numbers except 2 and 4
 * Return: 0 on validation
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			putchar(i + '0');
		++i;
	}
	putchar('\n');
}
