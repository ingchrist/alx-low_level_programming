#include "main.h"

/**
  * _puts - Prints a string
  * @str: The string to print
  *
  * Return: void
  */
void _puts(char *str)
{
	int i = 0

	for (i  str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}

