#include <stdio.h>
/**
 * main - prints alphabet from a to Z in lowercase.
(*
 * Return: 0 on validation
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
