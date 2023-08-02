#include "main.h"
/**
 * _print_rev_recursion - Print string in reverse
 * @wz: The string to be print
 * return 0 on validation
 */
void _print_rev_recursion(char *wz)
{
if (*wz)
{
_print_rev_recursion(wz + 1);
_putchar(*wz);
}
}

