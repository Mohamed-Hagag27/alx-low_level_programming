#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Variadic function that prints strings from arguments.
 * @separator: separates the arguments.
 * @n: Number of args.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str = NULL;
va_list str_input;

va_start(str_input, n);
for (i = 0; i < n; i++)
{
str = va_arg(str_input, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if ((i != n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(str_input);
}
