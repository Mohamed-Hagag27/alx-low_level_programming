#include <stdio.h>

/**
 * main - prints all numbers of base16.
 *
 * Return: always 0.
 */

int main(void)
{
int num = 48;
while (num < 58)
{
putchar(num);
num++;
}
char base16 = 'a';
while (base16 < 103)
{
putchar(base16);
base16++;
}
putchar('\n');
return (0);
}
