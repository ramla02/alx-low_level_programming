#include "main.h"
/**
 * main - is the main function and the start of the program.
 * Description: Write a program that prints _putchar, followed by a new line.
 * The program should return 0.
 * you are not allowed to standard i/o.
 * Return: 0 for the successful execution.
 */
int main(void)
{
	char c[] = "_putchar";

	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
