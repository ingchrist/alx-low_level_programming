#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign any char
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign any char
 * Return: pointer to array, NULL if fail
 *
 **/
char *create_array(unsigned int size, char c)
{
char *xyz;
unsigned int wz;

xyz = malloc(sizeof(char) * size);

if (size == 0 || xyz == NULL)
return (NULL);

for (wz = 0; wz < size; wz++)
xyz[wz] = c;
return (xyz);
}

