#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 validation
 */
char *_strchr(char *s, char c)
{
int wz = 0;

for (; s[wz] >= '\0'; wz++)
{
if (s[wz] == c)
return (&s[wz]);
}
return (0);
}

