#include "main.h"

/**
 * _puts-check the code
 * @s: var in 98
 *
 * Return: Always 0.
 */
#include "main.h"
void print_rev(char *s)
{
int i;
int y;
for (i = 0;s[i] != '\0';i++) {}
for (y  = i - 1; y >= 0;
y--)
{
_putchar(s[y]);
}
_putchar('\n');
}
