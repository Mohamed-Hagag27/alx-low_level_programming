#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - fills memory spaces with specific value.
 * @s: start point memory
 * @b: value to be filled with
 * @n: number of memory iterations
 * Return: the start point
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *pointer = s;
for (i = 0; i < n; i++)
{
*pointer = b;
pointer++;
}
return (s);
}
