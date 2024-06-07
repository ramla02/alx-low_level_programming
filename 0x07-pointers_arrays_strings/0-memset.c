#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: string
 * @b: byte
 * @n: number
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
