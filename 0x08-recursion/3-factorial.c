#include "main.h"

/**
 * factorial - returns factorial of number
 * @n: number to return factorial from
 *
 * Return: the factorial of n
 */
int factorial(int wz)
{
if (wz < 0)
return (-1);
if (wz == 0)
return (1);
return (wz * factorial(wz - 1));
}

