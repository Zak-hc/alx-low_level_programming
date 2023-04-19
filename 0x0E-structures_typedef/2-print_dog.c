#include "dog.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * print_dog- check the code
 *
 * @d: jdjejje
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
if (d->age == 0 || d->owner == 0)
{
printf("nil");
}
if (d->name == 0)
{
printf("Name: (nil)");
}
if (d == 0)
{
return;
}
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
