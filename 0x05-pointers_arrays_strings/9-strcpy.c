#include "main.h"
/**
 * *_strcpy - a function that prints n elements of an array of integers,
 * followed by a new line.
 * where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as
 *  they are stored in the array
 * You are allowed to use printf
 * @dest: destination
 * @src: the string to be copied.
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
