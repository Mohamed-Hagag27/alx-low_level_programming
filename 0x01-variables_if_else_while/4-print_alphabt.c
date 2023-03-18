#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e.
 *
 * Return: always 0
 */
int main(void)
{
char alphabet = 'a';
while (alphabet < 123)
{
if ((int) alphabet != 101 && (int) alphabet != 113)
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
