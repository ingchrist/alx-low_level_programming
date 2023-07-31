#include "main.h"
/**
 * print_chessboard - Entry points
 * @a: array
 * Return: Always 0 validation
 */
void print_chessboard(char (*a)[8])
{
int i;
int wz;

for (i = 0; i < 8; i++)
{
for (wz = 0; wz < 8; wz++)
_putchar(a[i][wz]);
_putchar('\n');
}
}

