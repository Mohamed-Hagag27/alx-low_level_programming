#include "main.h"
#include <stdio.h>

/**
 * _strspn - calculates the number of bytes in the prefix of a string
 * which consist only of bytes from another string
 * @s: the main string
 * @accept: prefix string
 * Return: number of prefix chars
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
while (*s)
{
int prefix = 0;
char *clone = accept;
while (*clone)
{
if (*s == *clone)
{
i++;
prefix = 1;
break;
}
clone++;
}
if (prefix == 0)
return (i);
s++;
}
return (i);
}
