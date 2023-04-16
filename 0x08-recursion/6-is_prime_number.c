#include"main.h"
/**
 * divisor - chekcs if a number is divisible by another.
 * @x: numerator.
 * @y: denominator.
 * Return: differs.
 */
int divisor(int x, int y)
{
if ((x % 2 == 0 && x != 2) || x < 0)
return (0);
if (x == 2)
return (1);
if (x % y == 0)
return (0);
if (y > (x / 2) || y == (x / 2))
return (1);
return (divisor(x, (y + 1)));
}
/**
 * is_prime_number - checks if a number is prime or not.
 * @n: the number to be checked.
 * Return: differs.
 */
int is_prime_number(int n)
{
return (divisor(n, 2));
}
