#include <stdio.h>
/**
 * main - prints all possible different of combs of three digits.
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
int num3 = num2 + 1;
while (num3 < 58)
{
putchar(num);
putchar(num2);
putchar(num3);
if (num != 55)
{
putchar(',');
putchar(' ');
}
num3++;
}
num2++;
}
num++;
}
putchar('\n');
return (0);
}
