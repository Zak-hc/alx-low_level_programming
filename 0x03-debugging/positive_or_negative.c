#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <positive_or_negative>
/**
 * positive_or_negative - check it
 *
 * @n: check number
 * Return: 0 (Success)
 */
void positive_or_negative(int)
{
int n;
if (n < 0)
printf("%i is negative\n", n);
if (n == 0)
printf("%i is zero\n", n);
if (n > 0)
printf("%i is positive\n", n);
}
