#include "main.h"
/**
 * _print_rev_recursion - Print string in reverse
 * @s: The string to be print
 * return 0 on validation
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

