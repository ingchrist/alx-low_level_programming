#include <stdio.h>

/**
 * main - prints  possible combination of two two-digit number
 * Return: Always 0 (validation)
 */
int main(void)
{
int i, wz;

for (i = 0; i < 100; i++)
{
for (wz = 0; wz < 100; wz++)
{
if (i < wz)
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(' ');
putchar((wz / 10) + 48);
putchar((wz % 10) + 48);
if (i != 98 || wz != 99)
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

