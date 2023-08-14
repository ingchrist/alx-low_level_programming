


#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - ...
  * @wz: ...
  *
  * Return: ...
  */
void free_dog(dog_t *wz)
{
if (wz != NULL)
{
free(wz->owner);
free(wz->name);
free(wz);
}
}

