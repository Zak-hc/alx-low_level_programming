#include <stdlib.h>
/**
 * *create_array- converts a string to an integer
 * @size: string to be converted
 * @c: jfjffkkfk
 * Return: the int converted from the string
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *z;

	z = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
	z[i] = c;
	}
	if (z == NULL)
	return (0);
	if (size == 0)
	{
	return (0);
	}
	else
	return (z);
}
