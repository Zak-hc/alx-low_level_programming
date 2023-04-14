#include <stdlib.h>
/**
 * _calloc - hbbdhb ebhbwhbhwb
 * @nmemb: number ets in the array
 * @size: size ie array
 * Return: pointcated memory or NULL if nmemb or size is 0 or
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
