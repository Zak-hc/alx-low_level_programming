/**
 * @s: is a var
 *
 * _strlen-var in 98
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++);
return (i);
}
