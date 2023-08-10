#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Main Enntry
 * @ptr: inputs
 * @old_size: inputs
 * @new_size: inputs
 * Return: 0 on validation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *wz;
unsigned int i, max = new_size;
char *oldp = ptr;

if (ptr == NULL)
{
wz = malloc(new_size);
return (wz);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);

wz = malloc(new_size);
if (wz == NULL)
return (NULL);
if (new_size > old_size)
max = old_size;
for (i = 0; i < max; i++)
wz[i] = oldp[i];
free(ptr);
return (wz);
}
