#include "main.h"
/**
 * _strpbrk - Entry points
 * @s: input
 * @accept: input
 * Return: Always 0 validation
 */
char *_strpbrk(char *s, char *accept)
{
int wz;

while (*s)
{
for (wz = 0; accept[wz]; wz++)
{
if (*s == accept[wz])
return (s);
}
s++;
}

return ('\0');
}

