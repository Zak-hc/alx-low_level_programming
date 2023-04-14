#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates two stringos
 * @s1: stringoo
 * @s2: stringoos
 * @n: hghghg
 * Return: pointring
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, a, b;
char *z;

if (s1 == NULL)
{
s1 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
}
if (s2 == NULL)
{
s2 = "";
}
for (j = 0; s2[j] != '\0'; j++)
{
}
if (n >= j)
{
n = j;
}
z = malloc(sizeof(char) * (i + n + 1));
if (z == NULL)
{
return (NULL);
}
for (a = 0; a < i; a++)
{
z[a] = s1[a];
}
for (b = 0; b < n; b++)
{
z[a] = s2[b];
a++;
}
z[a] = '\0';
return (z);
}
