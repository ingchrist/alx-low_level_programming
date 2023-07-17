#include <stdio.h>
/**
 * main - Prints all the alphabet but don't print the letters q and e.
(*
 * Return: 0 on validation
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
