#include <stdio.h>
#include "main.h"
/**
 * print_array - print n element of array of integer
 * followed by a new line
 * @a: the pointer to an array
 * @n: the number of elements to be print
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}

