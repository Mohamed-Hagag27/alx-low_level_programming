#include "main.h"
/**
 * _islower - checks whether the char is lowercase or not.
 * @c: the character to check.
 * Return: on success 1 otherwise 0.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}