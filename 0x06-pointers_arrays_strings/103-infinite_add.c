#include "main.h"

/**
 * rev_string - revers array
 * @n: intege param
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int wz = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (wz = 0; wz < i; wz++, i--)
	{
		temp = *(n + wz);
		*(n + wz) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, wz = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + wz) != '\0')
		wz++;
	i--;
	wz--;
	if (wz >= size_r || i >= size_r)
		return (0);
	while (wz >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (wz < 0)
			val2 = 0;
		else
			val2 = *(n2 + wz) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		wz--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

