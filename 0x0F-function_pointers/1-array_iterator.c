#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator- hhhgghh
 *@array: hjhjj
 *@size: yghgh
 *@action: ygghh
 *return: fhhfhf 0 dhdh
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && action)
for (i = 0; i < size; i++)
action(array[i]);
}
