#include "main.h"

/**
  * _isdigit - check if value is a number between 0 - 9
  * @a: input number
  * Return: 1 if true or 0 if false
  */

int _isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
