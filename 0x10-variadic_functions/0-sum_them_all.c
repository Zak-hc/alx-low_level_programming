#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all- rrjrjrj
 *@n: jfjjjfjjf
 *Return: jjfjfjfjf 0 jfjfj
*/
int sum_them_all(const unsigned int n, ...)
{
if (n == NULL)
{
return (0);
}
va_list(arg);
va_start(arg, n);
int sum = 0;
unsigned int i;
for (i = 0; i < n; i++)
{
sum += va_arg(arg, int);
}
va_end(arg);
return (sum);
}
