#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 to 9, followed
 * by a new line.
 * You can only use _putchar twice in your code
 * Return: 0 for success
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
