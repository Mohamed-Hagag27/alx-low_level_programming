#include"main.h"
/**
 * _strcpy - copies string pointed by src to another one pointed by dest.
 * @dest: pointer to the destination string.
 * @src: pointer to the source string.
 * Return: always dest.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
int j;
while (src[i] != '\0')

i++;

for (j = 0 ; j < i + 1 ; j++)
dest[j] = src[j];

return (dest);
}
