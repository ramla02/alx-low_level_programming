#include "main.h"
/**
 * print_alphabet_x10 - is a function that prints the alphabet letters 10x.
 * Description: Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * You can only use _putchar twice in your code.
 * Return: success always.
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
