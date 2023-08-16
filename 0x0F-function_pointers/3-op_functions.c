


#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @wz: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int wz, int b)
{
return (wz + b);
}

/**
 *  * op_sub - calculates the difference of two integers
 *   * @wz: first integer
 *    * @b: second integer
 *     *
 *      * Return: difference of a and b
 */
int op_sub(int wz, int b)
{
return (wz - b);
}

/**
 *  * op_mul - calculates the product of two integers
 *   * @wz: first integer
 *    * @b: second integer
 *     *
 *      * Return: product of a and b
 */
int op_mul(int wz, int b)
{
return (wz * b);
}

/**
 *  * op_div - calculates the division of two integers
 *   * @wz: first integer
 *    * @b: second integer
 *     *
 *      * Return: result of the division of a and b
 */
int op_div(int wz, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (wz / b);
}

/**
 *  * op_mod - calculates the remainder of the division of two integers
 *   * @wz: first integer
 *    * @b: second integer
 *     *
 *      * Return: remainder of a divided b
 */
int op_mod(int wz, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (wz % b);
}

