#ifndef "_1_INIT_DOG_C_"
#define "_1_INIT_DOG_C_"
#include "dog.h"
#include "stdio.h"
/**
 * init_dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: hjdjj
 *
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
#endif
