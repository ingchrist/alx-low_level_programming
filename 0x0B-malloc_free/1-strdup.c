#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicat to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *xwz;
int wz, r = 0;

if (str == NULL)
return (NULL);
wz = 0;
while (str[wz] != '\0')
wz++;

xwz = malloc(sizeof(char) * (wz + 1));

if (xwz == NULL)
return (NULL);

for (r = 0; str[r]; r++)
xwz[r] = str[r];

return (xwz);
}

