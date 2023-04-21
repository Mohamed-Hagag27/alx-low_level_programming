#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - variadic funtion that print numbers and a string.
 * @separator:  string to be printed between numbers.
 * @n: Number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list input;
va_start(input, n);
for (i = 0; i < n; i++)
{
num = va_arg(input, int);
printf("%d", num);
if ((i != n - 1) && separator != NULL)
printf("%s", separator);
}
va_end(input);
printf("\n");
}
