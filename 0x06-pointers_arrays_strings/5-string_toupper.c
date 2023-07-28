#include "main.h"
/**
 * string_toupper - change all lowercas to uppercas
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int wz;

wz = 0;
	while (n[wz] != '\0')
	{
		if (n[wz] >= 'a' && n[wz] <= 'z')
			n[wz] = n[wz] - 32;
		wz++;
	}
	return (n);
}

