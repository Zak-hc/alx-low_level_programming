#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number 
 * @argc: An argcounter
 * @argv: An argvalues
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argv[0])
printf("%d\n", argc - 1);
return (0);
}
