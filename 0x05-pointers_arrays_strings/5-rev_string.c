#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: pointer to the begining of a string.
 */
void rev_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
int index;
index = i - 1;
int c;
for (c = 0; c < i / 2; c++)
{
char ch = s[c];
s[c] = s[index - c];
s[index - c] = ch;
}
}
