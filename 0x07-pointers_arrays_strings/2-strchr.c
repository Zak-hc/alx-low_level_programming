#include "main.h"
/**
 * _strchr- converts a string to an integer
 * @s: string to be converted
 * @c: jfjffkkfk
 * Return: the int converted from the string
 */
char *_strchr(char *s, char c)
{
int i;
int v;
int f = 0;
char y[100];
char *p = y;
for (v = 0; s[v] != '\0'; v++)
{
if (s[v] == c)
break;
}
for (i = v; s[i] != '\0'; i++)
{
y[f] = s[i];
f++;
}
y[f] = '\0';
return (p);
}
