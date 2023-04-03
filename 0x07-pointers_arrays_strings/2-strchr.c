#include "main.h"
/**
 * _strchr- converts a string to an integer
 * @s: string to be converted
 * @c: jfjffkkfk
 * Return: the int converted from the string
 */
char *_strchr(char *s, char c)
{
int v;
for (v = 0; s[v] != '\0'; v++)
{
if (s[v] == c)
break;
}
return (&s[v]);
}
