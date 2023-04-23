#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, length1 = 0, length2 = 0, total_length;
char *strng;
if (s1 == NULL)
length1 = 0;
else
{
while (s1[i])
{
length1++;
i++;
}
}
i = 0;
if (s2 == NULL)
length2 = 0;
else
{
while (s2[i])
{
length2++;
i++;
}
}
total_length = length1 + length2 + 1;
strng = malloc(total_length * (sizeof(char)));
if (strng == NULL)
return (NULL);
for (i = 0; i < length1; i++)
strng[i] = s1[i];

for (j = 0; j < length2; j++)
{
strng[i] = s2[j];
i++;
}

return (strng);
}
