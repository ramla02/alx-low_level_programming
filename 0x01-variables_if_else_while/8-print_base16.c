#include <stdio.h>
/**
 * main - is the main function and the start of the program.
 * Description: Write a program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden).
 * You can only use putchar three times in your code.
 * Return: 0 for the successful execution
 */
int main(void)
{
	int num;
	char c;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
