#include <stdio.h>
/**
 * print_diagonal - draw diagonal line across (n) terminal line.
 * @n: the number of line to draw
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= j; i++)
			{
				if (i != 1)
					putchar(' ');
				if (i == j)
				{
					putchar('\\');
					putchar('\n');
				}
			}
		}
	}
	else
		putchar('\n');
}

