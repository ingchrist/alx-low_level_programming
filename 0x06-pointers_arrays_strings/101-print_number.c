#include "main.h"

/**
  * print_number - print number char
  * @n: integer param
  * Return: 0
 **/

void print_number(int n)
{
	unsigned int wz;

	wz = n;

	if (n < 0)
	{
		_putchar('-');
		wz = -n;
	}

	if (wz / 10 != 0)
	{
		print_number(wz / 10);
	}
	_putchar((wz % 10) + '0');
}

