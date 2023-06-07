#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies number of bytes from memory area to another
 * @dest: memory destination
 * @src: memory source
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *to = dest;

for (i = 0; i < n; i++)
{
*to = *src;
to++;
src++;
}
return (dest);
}
