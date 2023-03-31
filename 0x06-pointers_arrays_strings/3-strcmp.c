#include "main.h"
/**
 * *_strcmp- compar string 
 * @s1: string to be converted
 * @s2: jfjffkkfk
 * Return: the int converted from the string
 */
int _strcmp(char *s1, char *s2){
int i;
int s;
for (i = 0; s1[i] != '\0' || s2[i] != '\0' ; i++)
{
s = s1[i] - s2[i];
if (s != 0)
break;
}
return (s);
}
