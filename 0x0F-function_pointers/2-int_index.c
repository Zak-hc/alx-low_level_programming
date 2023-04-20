#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: input integer arr
 * @size: size of the arr
 * @cmp: pointer to the functi
 *
 * Return: in tmp
 * function doturn 0. If no elements matches,
 * return -1  0, ren -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array && cmp)
    {
        int i = 0;
        while (i < size)
        {
            if (cmp(*(array + i)))
                return (i);
            i++;
        }
    }
    return (-1);
}

