#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Main Entrry
 * @nmemb: input
 * @size: input
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *wz;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
wz = malloc(nmemb * size);
if (wz == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
wz[i] = 0;
return (wz);
}
