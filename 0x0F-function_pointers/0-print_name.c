#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using function pointers
 * @name: String to be printed out
 * @f: Function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
