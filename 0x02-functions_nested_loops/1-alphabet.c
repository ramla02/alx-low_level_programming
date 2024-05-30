#include "main.h"
/**
 * print_alphabet - is a function that prints the alphabet letters.
 * Description: Write a function that prints the alphabet, in lowercase,
 * followed by a new line.
 * You can only use _putchar twice in your code
 * Return: 0 for the successful execution.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
