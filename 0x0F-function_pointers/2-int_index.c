#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer in an array of ints by a callback
 * function.
 * @array: array of ints
 * @size: size of the array
 * @cmp: pointer to function comparing values
 * Return: either -1 or the index of specific number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}

return (-1);
}
