#include "main.h"
/**
 * reverse_array- converts a string to an integer
 * @a: string to be converted
 * @n: jfjffkkfk
 * Return: the int converted from the string
 */

void reverse_array(int *a, int n)
{
int i;
int z[100];
int j = 0;
for (i = n - 1; i >= 0; i--)
{
z[j] = a[i];
j++;
}
for (j = 0; j < n ; j++)
{
a[j] = z[j];
}
}
