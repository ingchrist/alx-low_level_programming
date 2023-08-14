


#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Initializes dog structure
  * @wz: A dog structure.
  * @name: The name of the dog.
  * @age: The age of the dog.
  * @owner: The owner of the dog.
  *
  * Return: 0 on validation
  */
void init_dog(struct dog *wz, char *name, float age, char *owner)
{
if (wz != NULL)
{
wz->name = name;
wz->age = age;
wz->owner = owner;
}
}

