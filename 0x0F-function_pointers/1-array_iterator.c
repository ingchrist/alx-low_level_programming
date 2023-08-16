


#include "function_pointers.h"

/**
 * array_iterator - ...
 * @array: ...
 * @size: ...
 * @action: ...
 * Return: ...
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int wz = 0;

if (array != NULL && action != NULL && size > 0)
{
while (wz < size)
{
action(array[wz]);
wz++;
																				}
}
}
