#include <stdio.h>
/**
 * main - prints or write all possible combination of singled digit numbers.
(*
 * Return: 0 on validation
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);

}
