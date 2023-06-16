#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - conatenates two strings
 * @s1: fist string
 * @s2: second string
 * Return: NULL on failur while arr on success
 */

char *str_concat(char *s1, char *s2)
{
int c1 = 0, c2 = 0, i, k;
char *arr = NULL;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[c1] != '\0')
c1++;
while (s2[c2] != '\0')
c2++;

arr = malloc((c1 + c2 + 1) * sizeof(char));
if (arr == NULL)
return (NULL);
for (i = 0; i < c1; i++)
arr[i] = s1[i];

for (k = 0 ; k < c2; k++)
{
arr[i] = s2[k];
i++;
}

return (arr);
}
