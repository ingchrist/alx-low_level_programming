#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string, and new line
 * @str: the string to print
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i = len / 2;
	int m = 0;
	int n = len % 2;

	for (m = i + n; m < len; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}

