#include "function_pointers.h"
#include "stdio.h"
#include "stdlib.h"
/**
 *array_iterator- hhhgghh
 *@array: hjhjj
 *@size: yghgh
 *@action: ygghh
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
