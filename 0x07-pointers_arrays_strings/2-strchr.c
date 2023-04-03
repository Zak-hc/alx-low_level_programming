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
int  find = 0;
for (v = 0; s[v] != '\0'; v++)
{
if (s[v] == c)
{
find = 1;
break;
}
}
if(find == 1)
{
return (&s[v]);
}
return (0);
}
