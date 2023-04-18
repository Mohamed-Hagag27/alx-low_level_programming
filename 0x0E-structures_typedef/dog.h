#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A simple struct that contains variables
 * @name: Holds name of dog in char array
 * @age: Holds number, including any decimals
 * @owner: Holds name of owner in char array
 */
struct dog
{
char *name;
char *owner;
float age;
};
/**
 *dog_t - typedef of struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


void free_dog(dog_t *d);

#endif
