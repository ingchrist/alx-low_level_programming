#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a  2d array
 * @grid: 2d grids
 * @height: height dimension of grids
 * Description: frees memory of grids
 * Return: nothing
 *
 **/
void free_grid(int **grid, int height)
{
int wz;

for (wz = 0; wz < height; wz++)
{
free(grid[wz]);
}
free(grid);
}

