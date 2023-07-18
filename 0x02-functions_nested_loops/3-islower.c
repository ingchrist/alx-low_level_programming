#include "main.h"
/**
 * _islower - verify if a character is a lowercase.
 * @c: the character to be checked
 *
 * Return: 1 if character is lowercase, 0 else.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
