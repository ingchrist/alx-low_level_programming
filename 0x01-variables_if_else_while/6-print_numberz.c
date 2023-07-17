#include <stdio.h>
/**
 * main - prints all number from 0-9 without using the char and  printf/puts,
 * and putchar 2x max
(*
 * Return: 0 on validation
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
