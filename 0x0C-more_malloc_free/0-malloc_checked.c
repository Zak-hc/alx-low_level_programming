#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked- cs a steger
 * @b: srted
 * Return: the int cotetig
 */

void *malloc_checked(unsigned int b)
{
char* ptr
ptr= malloc(b);
    if (ptr == NULL) {
        exit(98);
    }
    return ptr;
}
