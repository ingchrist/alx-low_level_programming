


#include "function_pointers.h"

/**
 *  * int_index - ...
 *   * @array: ...
 *    * @size: ...
 *     * @cmp: ...
 *      * Return: ...
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int wz = 0;

if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (wz < size)

{

if (cmp(array[wz]))

return (wz);


wz++;
}
}
}

return (-1);
}
