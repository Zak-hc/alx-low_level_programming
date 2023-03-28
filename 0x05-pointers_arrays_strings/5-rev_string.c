#include "main.h"

/**
 * rev_string-check the code
 * @s: var in 98
 *
 * Return: Always 0.
 */
#include "main.h"
void rev_string(char *s)
{
int i;
int y;
int j = 0;
char c;
for (i = 0; s[i] != '\0';
i++)
{
}
for (y  = i - 1; y > j;
y--)
{
c = s[j];
s[j] = s[y];
s[y] = c;
j++;
}
}
