#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if the variable is digit or not.
 * @c: the variable to check.
 * Return: differs due to the condition result.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);

return (0);
}

/**
 * print_dog - print dog struct members
 * @d: pointer to the dog struct
 */

void print_dog(struct dog *d)
{
int n = (int) d->age %10;
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
if (!_isdigit(n))
printf("age: (nil)\n");
else
printf("Age: %.6f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
