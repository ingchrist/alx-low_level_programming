#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get end of inputs and adds together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *conct;
int wz, xwz;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

wz = xwz = 0;
while (s1[wz] != '\0')
wz++;
while (s2[xwz] != '\0')
xwz++;
conct = malloc(sizeof(char) * (wz + xwz + 1));

if (conct == NULL)
return (NULL);
wz = xwz = 0;
while (s1[wz] != '\0')
{
conct[wz] = s1[wz];
wz++;
}

while (s2[xwz] != '\0')
{
conct[wz] = s2[xwz];
wz++, xwz++;
}
conct[wz] = '\0';
return (conct);
}

