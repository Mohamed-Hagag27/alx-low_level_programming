#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func -pointer to a function returning an operation function.
 * Return: differs.
 * @s: operator.
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
int i;
i = 0;
while (i < )
{
if (*ops[i].op == s)
return (ops[i].f);
 i++;
}
return (NULL);
}
