#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars, and
 * initializes it with a specific char.
 * @size: size
 * @c: char
 * Return: NULL if size = 0 otherwise a pointer to the array, or
 * NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
