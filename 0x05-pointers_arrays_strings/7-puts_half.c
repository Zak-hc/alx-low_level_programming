#include "main.h"
/**
 * puts_half-check the cod
 * @str: var in 98
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i;
int j;
int k;
for (i = 0; str[i] != '\0';
i++)
{
}
if (i % 2 != 0)
k = (i / 2) + 1;
for (j = k ; j < i;
j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
