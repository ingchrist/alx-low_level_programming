#include <stdio.h>
/**
 * print_triangle - draw triangle using multiple terminal line and #'s.
 * @size: the exact height of the triangle.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				if (i < j)
					putchar(' ');
				else
					putchar('#');
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
