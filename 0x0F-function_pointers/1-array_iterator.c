#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: element of an array
 * @size: size of the array
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
