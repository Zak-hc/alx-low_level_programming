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
printf("Name: (nil) %s\n", d->name);
printf("(nil) %f\n", d->age);
printf("(nil) %s\n", d->owner);
}
}
