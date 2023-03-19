#include <stdio.h>

/**
 * main - prints all numbers of base16.
 *
 * Return: always 0.
 */

int main(void)
{
int num = 48;
char base = 'a';
while (num < 58)
{
putchar(num);
num++;
}
while (base < 103)
{
putchar(base);
base++;
}
putchar('\n');
return (0);
}
