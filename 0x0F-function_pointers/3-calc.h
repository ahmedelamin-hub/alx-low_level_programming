#ifndef _3_CALC_H_
#define _3_CALC_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - the stucture operation
 *
 * @op: the operator we want to use
 *
 * @f: the function
 */

typedef struct op
{
	char *op;
	int (*f)(int x, int y);
} op_t;

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);

#endif
