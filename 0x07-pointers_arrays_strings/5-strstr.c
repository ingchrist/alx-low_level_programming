#include "main.h"
/**
 * _strstr - Entry points
 * @haystack: input
 * @needle: input
 * Return: Always 0 validation
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *wz = haystack;
char *p = needle;

while (*wz == *p && *p != '\0')
{
wz++;
p++;
}

if (*p == '\0')
return (haystack);
}

return (0);
}

