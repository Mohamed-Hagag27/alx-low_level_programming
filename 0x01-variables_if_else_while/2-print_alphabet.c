#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: always 0
 */
int main(void)
{
char alphabet = 'a';
while (alphabet < 123)
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
