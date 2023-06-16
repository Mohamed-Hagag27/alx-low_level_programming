#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new sapce in memory which is a
 * duplicate of a string given as a parameter.
 * @str: the string to be duplicatd
 * Return: NULL in failure while the duplicated string in success
 */
char *_strdup(char *str)
{
int i = 0;
char *arr;
char *tmp = str;
if (str == NULL)
return (NULL);
while (*tmp)
{
i++;
tmp++;
}
arr = malloc(i *sizeof(char));
if (arr == NULL)
return (NULL);
while (*str)
{
*arr = *str;
str++;
arr++;
}
return (arr);
}
