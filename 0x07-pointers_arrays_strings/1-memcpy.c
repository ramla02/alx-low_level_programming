#include "main.h"
/**
 * _memcpy -a function that copies memory area.
 * @dest: destination
 * @src: source
 * @n: number
 * Description: The _memcpy() function copies n bytes from memory
 * area src to memory area dest
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
