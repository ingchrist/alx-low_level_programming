#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loops to make grids
 * @width: width inputs
 * @height: height inputs
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int **mee;
int wz, xwz;

if (width <= 0 || height <= 0)
return (NULL);

mee = malloc(sizeof(int *) * height);

if (mee == NULL)
return (NULL);

for (wz = 0; wz < height; wz++)
{
mee[wz] = malloc(sizeof(int) * width);

if (mee[wz] == NULL)
{
for (; wz >= 0; wz--)
free(mee[wz]);

free(mee);
return (NULL);
}
}

for (wz = 0; wz < height; wz++)
{
for (xwz = 0; xwz < width; xwz++)
mee[wz][xwz] = 0;
}

return (mee);
}

