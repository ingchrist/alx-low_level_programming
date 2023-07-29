#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to print
 */
void print_number(int n)
{
unsigned int wz;

if (n < 0)
{
wz = -n;
_putchar('-');
}
else
{
wz = n;
}

if (wz / 10)
{
print_number(wz / 10);
}

_putchar((wz % 10) + '0');
}

