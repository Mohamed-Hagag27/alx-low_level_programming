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
int count = 0;
char *arr = NULL;

if (str == NULL)
return (NULL);
while (str[count] != '\0')
{
i++;
count++;
}
arr = malloc((i + 1) *sizeof(char));

if (arr == NULL)
return (NULL);
for (count = 0; count < i; count++)
arr[count] = str[count];

return (arr);
}
