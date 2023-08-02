#include "main.h"

/**
* factorial - returns factorial of number
* @w: number to return factorial from
*
* Return: the factorial of w
*/
int factorial(int w)
{
if (w < 0)
return (-1);
if (w == 0)
return (1);
return (w * factorial(w - 1));
}

