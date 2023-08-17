


#include "variadic_functions.h"

/**
 *  * print_numbers - prints number, followed by new line.
 *   * @separator: separator to print between number
 *    * @n: number of numbers to print
 *     *
 *      * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i_wz;
va_list list;

va_start(list, n);
for (i_wz = 0; i_wz < n; i_wz++)
{
printf("%d", va_arg(list, int));
if (i_wz < n - 1 && separator)

printf("%s", separator);

}

printf("\n");

va_end(list);
}

