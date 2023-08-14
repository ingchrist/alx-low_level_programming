#include <stdlib.h>
#include "dog.h"

int _strlen(char *wz);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - ...
  * @name: ...
  * @age: ...
  * @owner: ...
  *
  * Return: ...
  */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *max_dog;
int name_l = 0, own_l = 0;

if (name != NULL && owner != NULL)
{
name_l = _strlen(name) + 1;
own_l = _strlen(owner) + 1;
max_dog = malloc(sizeof(dog_t));

if (max_dog == NULL)
return (NULL);

max_dog->name = malloc(sizeof(char) * name_l);

if (max_dog->name == NULL)
{
free(max_dog);
return (NULL);
}

max_dog->owner = malloc(sizeof(char) * own_l);

if (max_dog->owner == NULL)
{
free(max_dog->name);
free(max_dog);
return (NULL);
}

max_dog->name = _strcpy(max_dog->name, name);
max_dog->owner = _strcpy(max_dog->owner, owner);
max_dog->age = age;
}

return (max_dog);
}

/**
  * _strlen - Returns the length of a string
  * @wz: String to count
  *
  * Return: String length
  */
int _strlen(char *wz)
{
int c = 0;

for (; *wz != '\0'; wz++)
{
c++;
}

return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}

dest[i++] = '\0';

return (dest);
}

