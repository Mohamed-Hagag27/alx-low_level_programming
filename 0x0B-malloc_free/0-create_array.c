#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of characters.
 * @size: size of the array.
 * @c: the character which the array will be initialized with.
 * Return: Null of array.
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
arr = malloc(sizeof(char) * (size + 1));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
arr[i] = c;
}
arr[i] = '\0';
return (arr);
}
