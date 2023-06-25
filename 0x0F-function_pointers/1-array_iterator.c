#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_oiterator - executes a callback function on every element
 * of an array.
 * @array: the given array
 * @size: size of the array
 * @action: pointer to the callback function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size ; i++)
{
action(array[i]);
}
}
