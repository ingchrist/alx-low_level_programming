#include "variadic_functions.h"

/**
 *  * sum_them_all - function to sums all input parameter.
 *   * @n: number of parameter
 *    *
 *     * Return: sum all parameter
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i_wz;
va_list valist;

va_start(valist, n);
for (i_wz = 0; i_wz < n; i_wz++)
sum += va_arg(valist, int);

va_end(valist);

return (sum);
}

