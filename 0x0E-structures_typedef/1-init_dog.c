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
 * return : jdhhdhd 0 hdhhd
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
