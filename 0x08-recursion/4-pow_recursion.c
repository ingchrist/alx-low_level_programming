#include "main.h"

/**
 * _pow_recursion - returns value of x raise to the power of y
 * @wz: value to raise
 * @y: power
 *
 * Return: results of the power
 */
int _pow_recursion(int wz, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (wz * _pow_recursion(wz, y - 1));
}

