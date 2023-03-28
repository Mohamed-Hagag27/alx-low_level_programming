#include"main.h"
/**
 * puts2 - prints every other character.
 * @str: a pointer to the begining of the string.
 */
void puts2(char *str)
{
int i = 0;
int counter = 0;
while (str[i] != '\0')

i++;

for (counter = 0; counter < i ; counter += 2)

_putchar(str[counter]);

_putchar('\n');
}
