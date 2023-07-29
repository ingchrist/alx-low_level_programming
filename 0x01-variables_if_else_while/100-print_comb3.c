#include <stdio.h>

/**
 * main - prints  possible different combination of two digit
 * Return: ALways 0 (validation)
 */
int main(void)
{
int n, wz;

for (n = 48; n <= 56; n++)
{
for (wz = 49; wz <= 57; wz++)
{
if (wz > n)
{
putchar(n);
putchar(wz);
if (n != 56 || wz != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

