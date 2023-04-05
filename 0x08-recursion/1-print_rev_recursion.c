#include "main.h"
/**
 * _print_rev_recursion -im a function that prints a string in reverse.
 * @s: im a pointer to a string
 * Return: im nothing
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
