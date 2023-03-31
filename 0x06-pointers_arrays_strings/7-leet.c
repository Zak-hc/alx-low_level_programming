#include "main.h"
/**
 * leet- converts a string to an integer
 * @str: string to be convert
 * Return: the int converted from the string
 */
char *leet(char *str)
{
int j;
for (j = 0; str[j] != '\0'; j++)
{
if (str[j] == 'a' || str[j] == 'A')
str[j] = '4';
else if (str[j] == 'e' || str[j] == 'E')
str[j] = '3';
else if (str[j] == 'o' || str[j] == 'O')
str[j] = '0';
else if (str[j] == 't' || str[j] == 'T')
str[j] = '7';
else if (str[j] == 'l' || str[j] == 'L')
str[j] = '1';
}
return (str);
}
