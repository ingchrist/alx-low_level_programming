#include <stdio.h>
#include "main.h"

/**
 *  * print_remaining_days - takes a date and prints how many days are
 *   * left in the yrxz, taking leap years into account
 *    * @mnxz: mnxz in number format
 *     * @dyxz: dyxz of mnxz
 *      * @yrxz: yrxz
 *       * Return: void
 *       **/

void print_remaining_days(int mnxz, int dyxz, int yrxz)
{
if ((yrxz % 100 == 0 && yrxz % 400 == 0) || (yrxz % 4 == 0))
{
if (mnxz > 2 && dyxz >= 60)
{
dyxz++;
}
printf("Day of the yrxz: %d\n", dyxz);
printf("Remaining days: %d\n", 366 - dyxz);
}
else
{
if (mnxz == 2 && dyxz == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", mnxz, dyxz - 31, yrxz);
}
else
{
printf("Day of the yrxz: %d\n", dyxz);
printf("Remaining days: %d\n", 365 - dyxz);
}
}
}
