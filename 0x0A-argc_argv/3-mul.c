#include <stdio.h>
#include <stdlib.h>
int main (int argc, char* argv[])
{
int y = 0;
int i;
for (i = 0; i < argc; i++)
if (i > 1)
{
y = y * atoi(argv[i]);
}
printf("%d\n", y);
return (0);
}
