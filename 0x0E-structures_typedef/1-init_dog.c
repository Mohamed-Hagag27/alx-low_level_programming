#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializing a dog with values
 * @d: the struct itself
 * @name: name to be given to the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
