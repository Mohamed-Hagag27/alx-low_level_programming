#include"main.h"
/**
 * puts_half - prints the second half of a string.
 * @str: pointer to the begining of the string.
 */
void puts_half(char *str)
{
int i = 0;
int counter = 0;
while (str[i] != '\0')

i++;

for (counter = i / 2; counter < i  ; counter++)

_putchar(str[counter]);

_putchar('\n');
}
