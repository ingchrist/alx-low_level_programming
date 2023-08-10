#include "main.h"
#include <stdlib.h>

/**
 * array_range - Main Enttry
 * @min: inputs
 * @max: inputs
 * Return: 0 on validation
 */
int *array_range(int min, int max)
{
int i, l;
int *wz;

if (min > max)
return (NULL);
l = max - min + 1;
wz = malloc(sizeof(int) * l);
if (wz == NULL)
return (NULL);
for (i = 0; i < l; i++, min++)
{
wz[i] = min;
}
return (wz);
}
