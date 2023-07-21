#include <stdio.h>
/**
 * print_line - draws a straight line (n) characters long.
 * @n: the number of underscores to print.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			putchar('_');
	putchar('\n');
}

