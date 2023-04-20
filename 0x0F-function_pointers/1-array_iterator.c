#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function to every element of array.
 * @array: the array.
 * @size: size of the array.
 * @action: pointer fto executable function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (action == NULL || array == NULL || size <= 0)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
