#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array element
 * @size: size of array
 * @cmp: pointer to the function
 * Return: the index of the first element for which the cmp function does
 * not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
