#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked- cs a steger
 * @b: srted
 * Return: the int cotetig
 */

void *malloc_checked(unsigned int b)
{
void *ziko;
ziko = malloc(b);
if (ziko == NULL)
{
exit(98);
}
return (ziko);
}
