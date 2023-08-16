


#ifndef _CALC_H_
#define _CALC_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  * struct op - Struct op
 *   *
 *    * @op: The operator
 *     * @f: The function associated
 */
typedef struct op
{
char *op;
int (*f)(int wz, int b);
} op_t;

int op_add(int wz, int b);
int op_sub(int wz, int b);
int op_mul(int wz, int b);
int op_div(int wz, int b);
int op_mod(int wz, int b);
int (*get_op_func(char *s))(int, int);

#endif /* _CALC_H_ */

