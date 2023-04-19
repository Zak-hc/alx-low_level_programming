#ifndef "_1_INIT_DOG_C_"
#define "_1_INIT_DOG_C_"
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
#endif
