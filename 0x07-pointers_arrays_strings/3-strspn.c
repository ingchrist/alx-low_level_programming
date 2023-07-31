#include "main.h"
/**
 * _strspn - Entry points
 * @s: input
 * @accept: input
 * Return: Always 0 validation
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int wz;

while (*s)
{
for (wz = 0; accept[wz]; wz++)
{
if (*s == accept[wz])
{
n++;
break;
}
else if (accept[wz + 1] == '\0')
return (n);
}
s++;
}
return (n);
}

