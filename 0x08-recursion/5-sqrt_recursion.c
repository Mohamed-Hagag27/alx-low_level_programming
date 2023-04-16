#include"main.h"
/**
 * multiplier - takes a number and powers it checking if equals another number.
 * @x: the goal number.
 * @y: the multiplier number.
 * Return: differs.
 */
int multiplier(int x, int y)
{
if (y * y > x)
return (-1);
if (y * y == x)
return (y);
return (multiplier(x, (y + 1)));
}
/**
 * _sqrt_recursion - checks if a number has a natural square root or not.
 * @n: the number to be checked.
 * Return: differs.
 */
int _sqrt_recursion(int n)
{
return (multiplier(n, 1));
}
