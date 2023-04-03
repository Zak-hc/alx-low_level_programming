#include "main.h"
/**
 * _strchr- converts a string to an integer
 * @s: string to be converted
 * @c: jfjffkkfk
 * Return: the int converted from the string
 */
char *_strchr(char *s, char c)
{
char y[100];
int i;
int v;
int f = 0;
char *p = y;
int g;
for (g = 0;g < 90; g++)
{
 y[g]='\0';
}
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
