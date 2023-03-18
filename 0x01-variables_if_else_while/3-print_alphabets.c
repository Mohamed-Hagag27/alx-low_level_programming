#include <stdio.h>
/**
 * main - Prints alphabet in lowercase, and then in uppercase.
 *
 * Return: alwyas 0
 */
int main(void)
{
char alphabet = 'a';
while (alphabet < 123)
{
putchar(alphabet);
alphabet++;
}
alphabet = 'A';
while (alphabet < 91)
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
