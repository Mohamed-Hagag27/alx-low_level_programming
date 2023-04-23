#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - takes a pointer to string and duplicates it.
 * @str: string to be duplicated.
 * Return: the duplicated string.
 */
char *_strdup(char *str)
{
int i = 0, length = 0;
char *strn;
if (str == NULL)
return (NULL);
while (str[i])
{
length++;
i++;
}
strn = malloc(length * (sizeof(char)));

if (strn == NULL)
return (NULL);
for (i = 0; i < length; i++)

strn[i] = str[i];

return (strn);

}
