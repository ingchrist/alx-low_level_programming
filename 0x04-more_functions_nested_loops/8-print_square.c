#include <stdio.h>
/**
 * print_square - draw square using multiple terminal line and #'s.
 * @n: the number of # to print in each and every line.
 */
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				putchar('#');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}

