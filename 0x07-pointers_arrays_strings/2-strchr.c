#include "main.h"
#include <stdio.h>

/**
 * _strchr - Returns a pointer to the first occurrence of a letter in a string
 * @s: the string
 * @c: the letter we check for
 * Return: pointer to the letter
 */
char *_strchr(char *s, char c)
{
char *letter = NULL;
while (*s != NULL)
{
if (c == *s)
{
letter = s;
break;
}
s++;
}

return (letter);
}
