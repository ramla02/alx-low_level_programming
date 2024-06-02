#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: the integer parameter.
 * Return: the last digit.
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		_putchar(-d + '0');
			return (-d);
	}
	else
	{
		_putchar(d + '0');
		return (d);
	}
}
