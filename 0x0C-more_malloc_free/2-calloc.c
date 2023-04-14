#include <stdlib.h>
#include "main.h"
 /**
 * _calloc - allory for anf nments of size bytes
 * each and initzehe m to zero
 * @nmemb: number ets in the array
 * @size: size ie array
 *
 * Return: pointcated memory or NULL if nmemb or size is 0 or
 * if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = calloc(nmemb, size);
return (ptr);
}
