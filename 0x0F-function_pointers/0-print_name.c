#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - makes the callback function print the string given
 * @name: the string to be printed
 * @f: pointer to the callback function
 */

void print_name(char *name, void (*f)(char *))
{
if(name == NULL || f == NULL)
return;
f(name);
}
