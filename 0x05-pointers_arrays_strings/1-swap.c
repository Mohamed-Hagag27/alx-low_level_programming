#include"main.h"
/**
 * swap_int - swaps the values of two pointers.
 * @a: pointer 1.
 * @b: pointer 2.
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
