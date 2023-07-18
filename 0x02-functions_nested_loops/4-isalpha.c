#include "main.h"
/**
 * _isalpha - shows 1 if input is a letter.  0 else.
 *
 * @c: character in the  ASCII code
 *
 * Return: 1 for letters. 0 for all the  rest
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

