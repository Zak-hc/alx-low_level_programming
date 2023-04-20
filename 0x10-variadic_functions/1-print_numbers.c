#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers- rrjrjrj
 *@separator: jfjjjfjjf
 *@n: jjf
 *Return: jjfjfjfjf 0 jfjfj
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list b;
unsigned int i;
int result;
va_start(b, n);
for (i = 0; i < n; i++)
{
result = va_arg(b, int);
printf("%d", result);
if (separator == NULL)
{
continue;
}
else if (i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(b);
}
