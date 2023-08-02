#include "main.h"

/**
 * wildcmp - Compare string
 * @wz: pointer to string param
 * @s2: pointer to string param
 * Return: 0 on validation
 */

int wildcmp(char *wz, char *s2)
{
if (*wz == '\0')
{
if (*s2 != '\0' && *s2 == '*')
{
return (wildcmp(wz, s2 + 1));
}
return (*s2 == '\0');
}

if (*s2 == '*')
{
return (wildcmp(wz + 1, s2) || wildcmp(wz, s2 + 1));
}
else if (*wz == *s2)
{
return (wildcmp(wz + 1, s2 + 1));
}
return (0);
}

