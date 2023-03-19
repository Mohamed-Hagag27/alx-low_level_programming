#include <stdio.h>

/**
 * main - prints alphabet in reverse.
 *
 * Return: always 0.
 */
int main(void)
{
char alpha = 'z';
while (alpha > 96)
{
putchar(alpha);
alpha--;
}
putchar('\n');
return (0);
}
