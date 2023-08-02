#include "main.h"
/**
 * _strlen_recursion - Return the length of string.
 * @s: The string to measure
 *
 * Return: The length of string.
 */
int _strlen_recursion(char *s)
{
int wz = 0;

if (*s)
{
wz++;
wz += _strlen_recursion(s + 1);
}

return (wz);
}

