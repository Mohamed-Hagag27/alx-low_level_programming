#include <stdio.h>
/**
 * main - prints all single digit numbers using putchar
 *
 * Return: always 0.
 */
int main(void)
{
int i = 48;
while (i < 58)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
