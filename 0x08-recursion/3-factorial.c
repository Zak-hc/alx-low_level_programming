#include "main.h"
/**
 * factorial - I returns the factorial of a number
 * @n: number to return the factorial 
 * Return:int
 */
int factorial(int n)
{
int i;
int ii;
if (n < 0)
{
return (-1);
}
for (i = 1; i <= n; i++)
{
ii *= i;
}
return (ii);
}
