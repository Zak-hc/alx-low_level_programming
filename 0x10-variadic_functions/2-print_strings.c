#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  print_strings - functi prints strs by zhc
 * @separator: is the strn numbers
 * @n: n is the nus psed
 * Return: nthig
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int z;
	va_list zak;

	va_start(zak, n);

	for (z = 0; z < n; z++)
{
	char *s = va_arg(zak, char*);

	if (s == NULL)
{
	printf("(nil)");
}
	else
{
	printf("%s", s);
}
	if (z < n - 1 && separator != NULL)
{
	printf("%s", separator);
}
}
	printf("\n");
	va_end(zak);
}
