#include <stdio.h>
/**
 * _islower - is a function that checks wheather a letter is lower or not.
 * @c: is a character
 * Returns 1 if c is lowercase
 * Return: 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
