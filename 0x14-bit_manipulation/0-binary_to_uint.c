#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned
 * @b: pointer to a string
 *
 * Return: the converted num
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return (0);
while (*b != '\0')
{
if (*b != '0' && *b != '1')
return (0);
result = result << 1;
if (*b == '1')
result = result | 1;
b++;
}
return (result);
}
