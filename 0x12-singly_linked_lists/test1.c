#include <stdio.h>
#include "yassin.h"
size_t list_len(const list_t *h)
{
int count=0;
int i;
for (i = 0; h != NULL; i++)
{
printf("%s", h->str);
printf("%i", h->len);
count++;
h = h->next;
}
return (count);
}
