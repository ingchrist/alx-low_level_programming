#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry points
 * @a: input
 * @size: input
 * Return: Always 0 validation
 */
void print_diagsums(int *a, int size)
{
int sum1, sum2, wz;

sum1 = 0;
sum2 = 0;

for (wz = 0; wz < size; wz++)
{
sum1 = sum1 + a[wz * size + wz];
}

for (wz = size - 1; wz >= 0; wz--)
{
sum2 += a[wz * size + (size - wz - 1)];
}

printf("%d, %d\n", sum1, sum2);
}

