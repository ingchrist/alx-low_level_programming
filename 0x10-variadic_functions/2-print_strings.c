


#include "variadic_functions.h"

/**
 *  * print_strings - print strings, followed by new line.
 *   * @separator: separator to print between string
 *    * @n: number of strings to print
 *     *
 *      * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i_wz;
va_list list;
char *str;


va_start(list, n);

for (i_wz = 0; i_wz < n; i_wz++)

{

str = va_arg(list, char *);

/* ternary operator */

str ? printf("%s", str) : printf("(nil)");



if (i_wz < n - 1 && separator)



printf("%s", separator);


}

printf("\n");

va_end(list);
}

