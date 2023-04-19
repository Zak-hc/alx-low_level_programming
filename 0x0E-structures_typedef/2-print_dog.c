#include "dog.h"
#include "stdio.h"
#include "stdlib.h"
void print_dog(struct dog *d)
{
if (d == 0)
{
return;
}
if (d->name == 0)
{
printf("Name: (nil)");
}
if (d->age == 0 || d->owner == 0)
{
printf("nil");
}
{
printf("Name: %s\n",d-> name);
    printf("Age: %f\n",d-> age);
    printf("Owner: %s\n", d->owner);
}
}
