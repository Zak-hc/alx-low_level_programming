#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Function of hhsdhj
 * Return: 0 (Success)
 */
int main(void)
{int i;
int j;
for (i = 0; i < 9; i++)
{
for (j = 1; j < 10 ; j++)
{
if (i >= j)
continue;
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' '); }}
putchar('\n');
return (0); }
