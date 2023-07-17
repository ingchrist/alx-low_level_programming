#include <stdio.h>
/**
 * main - prints all the letters of the alphabet but in reverse.
(*
 * Return: 0 on validation
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
