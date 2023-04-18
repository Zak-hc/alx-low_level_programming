#include "stdio.h"
#include "stdlib.h"
/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0 on success
 */
int main(void)
{
const char *s = __FILE__;
int i;
for (i = 0; s[i] != '\0'; i++)
{
putchar (s[i]);
}
putchar ('\n');
return (0);
}
