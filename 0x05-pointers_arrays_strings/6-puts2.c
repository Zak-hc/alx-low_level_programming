/**
 * _puts2-check the code
 * @str: var in 98
 *
 * Return: Always 0.
 */
#include "main.h"
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0';
i = i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
