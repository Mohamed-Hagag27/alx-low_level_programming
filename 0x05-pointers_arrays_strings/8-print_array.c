#include"main.h"
#include <stdio.h>
/**
 * print_array - print n numbers of the array.
 * @a: pointer to the begining of the array.
 * @n: the number of values to be printed.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if ( i == 0)
printf("%d", a[i]);
else
printf(", %d", a[i]);
}
_putchar('\n');
}
