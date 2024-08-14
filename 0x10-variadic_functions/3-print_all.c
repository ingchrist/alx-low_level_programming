#include "variadic_functions.h"

/**
 *  * print_all - prints anything
 *   * @wz: list of argument types passed to the function
 *    *
 *     * Return: void
 */
void print_all(const char * const wz, ...)
{
int i = 0;
char *str, *separator = "";
va_list list;
va_start(list, wz);
while (wz && wz[i])
{
switch (wz[i])
{
case 'c':
printf("%s%c", separator, va_arg(list, int));

break;
case 'i':
printf("%s%d", separator, va_arg(list, int));
break;
case 'f':
printf("%s%f", separator, va_arg(list, double));

break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", separator, str);
break;
default:
i++;
continue;
}
separator = ", ";
i++;
}
printf("\n");
va_end(list);
}
      
     
     
       
     

