#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Main Entrry
 * @s1: input
 * @s2: input
 * @n: input
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, wz, k;
char *s;

if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i]; i++)
;
}
if (s2 == NULL)
wz = 0;
else
{
for (wz = 0; s2[wz]; wz++)
;
}
if (wz > n)
wz = n;
s = malloc(sizeof(char) * (i + wz + 1));
if (s == NULL)
return (NULL);
for (k = 0; k < i; k++)
s[k] = s1[k];
for (k = 0; k < wz; k++)
s[k + i] = s2[k];
s[i + wz] = '\0';
return (s);
}
