#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you want
 * @n: first number of number
 * @m: second number of number
 * Return: the number of bits nffjfjeeded to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int bit_diff = n ^ m;

	while (bit_diff)
	{
		count += bit_diff & 1;
		bit_diff >>= 1;
	}

	return (count);
}
