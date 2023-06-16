#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars and initializes it with
 * a specific char.
 * @size: size of the created array
 * @c: the initialized value of the array
 * Return: NULL if it fails and the array if it succeeded
 */

char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);
unsigned int i;
char *arr;
arr = malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);
for (i = 0 ; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
