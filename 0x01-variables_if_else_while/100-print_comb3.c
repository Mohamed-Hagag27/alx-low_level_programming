#include <stdio.h>

/**
 * main - prints all possible combinations of two digits.
 *
 * Return: always 0.
 */
int main(void)
{
int num = 48;
while (num < 58)
{
int num2 = num + 1;
while (num2 < 58)
{
putchar(num);
putchar(num2);
if (num != 56)
{
putchar(',');
putchar(' ');
}
num2++;
}
num++;
}
putchar('\n');
return (0);
}
