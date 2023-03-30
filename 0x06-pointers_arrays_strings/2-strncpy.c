#include "main.h"
/**
 * *_strncpy- converts a string to an integer
 * @dest: string to be converted
 * @src: jfjffkkfk
 * @n: intg
 * Return: the int converted from the string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
for (j = i; j < n; j++)
{
dest[j] = '\0';
}
return (dest);
}
