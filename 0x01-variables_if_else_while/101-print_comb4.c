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
int z;
for (i = 0; i <= 7; i++)
{
for (j = 1; j <= 8 ; j++)
{
for (z = 1; z <= 8 ; z++)
{
if (i >= j || j >= z)
continue;
putchar(i + '0');
putchar(j + '0');
putchar(z + '0');
if (i == 7 && j == 8 && z == 9)
break;
putchar(',');
putchar(' '); }}}
putchar('\n');
return (0); }
