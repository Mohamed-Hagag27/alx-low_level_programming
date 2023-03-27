#include"main.h"
/**
 * print_rev - print the string in reverse .
 * @str: pointer to the begining of the string.
 */
void print_rev(char *s)
{
int counter = 0;
while (s[counter] != '\0')
{
counter++;
}
while (counter > -1)
{
_putchar(s[counter]);
counter--;
}
_putchar('\n');
}
