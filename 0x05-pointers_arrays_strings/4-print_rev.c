#include"main.h"
/**
 * print_rev - print the string in reverse .
 * @str: pointer to the begining of the string.
 */
void print_rev(char *str)
{
int counter = _strlen(str);
while (counter > -1)
{
_putchar(*(str + counter));
counter--;
}
}
