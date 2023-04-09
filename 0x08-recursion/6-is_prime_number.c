#include "main.h"

/**
 * check - checks if number is prime
 * @a:integer
 * @b:integer
 * Return:integer
 */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - if number is prime
 * @n:number to evaluate
 * Return:integer
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
