#include "main.h"

/**
  * _isupper - A function that check for uppercase character
  *
  * @c: input character
  *
  * Return: 1 if true and 0 if false
  */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
