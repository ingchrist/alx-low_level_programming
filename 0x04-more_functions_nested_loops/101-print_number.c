#include "main.h"
/**
 * print_number - print any number
 * @n: input any number
 * Return: 0 after succes
 */
void print_number(int n)
{
	long len, res, i, temp, expo;

	res = n;
	expo = len = 1;
/*Check negatives*/
	if (res < 0)
	{
		res *= -1;
		_putchar('-');
	}

/**/
	temp = res;
	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}

/*Create Exponent*/
	for (i = 1; i < len; i++)
		expo *= 10;
/*Main*/
	while (expo > 1)
	{
		_putchar((res / expo) % 10 + '0');
		expo /= 10;
	}
	_putchar(res % 10 + '0');
}
