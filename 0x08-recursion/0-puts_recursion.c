#include "main.h"
/**
 * _puts_recursion - function's like puts()
 * @wz: input
 * Return: Always 0 validation
 */
void _puts_recursion(char *wz)
{
if (*wz)
{
_putchar(*wz);
_puts_recursion(wz + 1);
}

else
_putchar('\n');
}

