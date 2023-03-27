/**
 * _strlen-var in 
 *
 * @s: is a var
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0';
i++)
;
return (i);
}
