#include"main.h"
/**
 * more_numbers - prints from 0 to 14 10 times.
 * Return: always 0.
 */
void more_numbers(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
int j;
for (j = 0; j < 15; j++)
{
int num = j;
if (j > 9)
{
num -= 10;
_putchar('1');
}
_putchar(num + '0');
}
_putchar('\n');
}
}
