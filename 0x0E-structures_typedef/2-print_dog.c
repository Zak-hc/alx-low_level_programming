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
if (d == 0)
{
return;
}
{
printf("Name: %s\n", d->name = 0 ? "(nil)" : d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner = 0 ? "(nil)" : d->owner);
}
}
