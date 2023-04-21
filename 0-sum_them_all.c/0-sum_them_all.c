#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - take variable number of args and sum them.
 * @n: Number of arguments.
 * Return: The sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list input;
va_start(int_input, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)

sum += va_arg(input, int);

va_end(nput);
return (sum);
}
