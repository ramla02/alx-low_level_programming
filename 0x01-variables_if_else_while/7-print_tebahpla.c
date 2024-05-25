#include <stdio.h>
/**
 * main - is the main function and the start of the program.
 * Description: Write a program that prints the lowercase alphabet in reverse,
 *  followed by a new line.
 * You can only use the putchar function (every other function
 *  (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code.
 * Return: 0 for successful execution
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
