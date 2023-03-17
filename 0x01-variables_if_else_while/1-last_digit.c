#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Function of hhsdhj
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int u;
srand(time(0));
n = rand() - RAND_MAX / 2;
u = n % 10;
if (u == 0)
printf("Last digit of  %i is  %i and is   0\n", n, u);
if (u > 5)
printf("Last digit of  %i is  %i is greater than   5\n", n, u);
if (n < 6)
printf("Last digit of %i is %i is less than 6 and not 0\n", n, u);
return (0);
}
