#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 *  followed by a new line.
 * You can only use _putchar three times in your code
 * Return: 0 for success
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
