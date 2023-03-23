#include "main.h"
/**
 * jack_bauer - prints every second of a day.
 */
void jack_bauer(void)
{
int a = 0;
while (a < 3)
{
int b = 0;
while (b < 4)
{
int c = 0;
while (c < 6)
{
int d = 0;
while (d < 10)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
d++;
}
c++;
}
b++;
}
a++;
}
}
