#include "stdio.h"
#include "stdlib.h"
int main (void)
{
const char *s = __FILE__;
int i;
for (i = 0; i != '\0'; i++)
{
putchar (s[i]);
}
putchar ('\n');
return (0);
}
