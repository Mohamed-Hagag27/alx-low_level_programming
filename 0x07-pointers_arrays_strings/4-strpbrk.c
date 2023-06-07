#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence in a string of any char in
 * another string
 * @s: main string
 * @accept: the checking string
 * Return: pointer to the byte that matches the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *clone = accept;
while (*clone)
{
if (*s == *clone)
return (s);
clone++;
}
s++;
}
return (NULL);
}
