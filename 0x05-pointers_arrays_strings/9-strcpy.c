#include "stdio.h"
#include "main.h"
#include "string.h"
/**
 * _strcpy- check the cod
 * @dest: var in 98
 * @src: varrrrr
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[strlen(src)] = '\0';
return (dest);
}
