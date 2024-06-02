#include "main.h"
/**
 * _isalpha - is a function that checks for alphabetic character.
 * Returns 1 if c is a letter, lowercase or uppercase
 * Return:  0 otherwise
 * @c: character.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
