#include "main.h"
/**
 * cap_string- converts a string to an integer
 * @str: string to be convert
 * is_separator- jjfjfj
 * @c: char
 * @separators: char
 *
 * Return: the int converted from the string
 */
int is_separator(char c, char *separators)
{
int j;
for (j = 0; separators[j] != '\0'; j++)
{
if (c == separators[j])
{
return (1);
}
}
return (0);
}
char *cap_string(char *str)
{
int i, j;
char separators[] = " \t\n,;.!?\"(){}";
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 || is_separator(str[i - 1], separators))
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
}
}
return (str);
}
{
