#include "main.h"
/**
 * main - is the main function and the start of the program.
 * Description: Write a function that prints the alphabet, in lowercase,
 * followed by a new line.
 * You can only use _putchar twice in your code
 * Return: 0 for the successful execution.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
