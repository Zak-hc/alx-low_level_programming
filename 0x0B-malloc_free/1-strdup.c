#include <stdlib.h>
/**
 * *_strdup- converts ato ager
 * @str: sng to rted
 * Return: the int crted om e ring
 */
char *_strdup(char *str)
{
int i;
char *z;
int j;
for (j = 0; str[j] != '\0'; j++)
{
}
if (j == 0)
{
return (0);
}
z = malloc(sizeof(char) * j);
if (z == NULL)
{
return (0);
}
for (i = 0; i < j; i++)
{
z[i] = str[i];
}
return (z);
}
