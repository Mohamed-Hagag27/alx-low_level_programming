/**
 * print_alphabet_x10 - print alphabet 10 times.
 */
void print_alphabet_x10(void)
{
int cnt = 0;
while (cnt < 10)
{
int i = 97;
while (i < 123)
{
_putchar(i);
i++;
}
_putchar('\n');
cnt++;
}
}
