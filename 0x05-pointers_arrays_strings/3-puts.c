#include "main.h"

/**
 * _puts - print a string
 * @str: the string
 *
 * Return: the length of string
 */
void _puts(char *str)
{
int wz = 0;

while (str[wz] != '\0')
{
_putchar(str[wz]);
wz++;
}
_putchar('\n');
}

