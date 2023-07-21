#include <stdio.h>
/**
 * more_numbers - prints the numbers 0-14 ten times.
 * Return:0 on success
 */
void more_numbers(void)
{
	int i, j;

	i = j = 0;
	while (i < 10)
	{
		while (j <= 14)
		{
			if (j >= 10)
				putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			++j;
		}
		putchar('\n');
		j = 0;
		i++;
	}
}
