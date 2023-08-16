


#include "3-calc.h"

/**
 * get_op_func - pointer to function that selects the correct function
 * from the available operators in the struct operator
 * @s: the operator given by the user
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int wz;

wz = 0;

while (ops[wz].op)
{
if (strcmp(ops[wz].op, s) == 0)
return (ops[wz].f);
wz++;
}

return (NULL);
}

