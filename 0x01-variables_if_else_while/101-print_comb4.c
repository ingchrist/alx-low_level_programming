#include <stdio.h>

/**
 * main - prints  possible different combination of three digit
 * Return: Always 0 (validation)
 */
int main(void)
{
int n, m, wz;

for (n = 48; n < 58; n++)
{
for (m = 49; m < 58; m++)
{
for (wz = 50; wz < 58; wz++)
{
if (wz > m && m > n)
{
putchar(n);
putchar(m);
putchar(wz);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

