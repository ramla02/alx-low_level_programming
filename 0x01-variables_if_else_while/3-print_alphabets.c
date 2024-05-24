#include <stdio.h>
/**
 * main - is the start of the program.
 * Description: Write a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0 for the successful execution.
 */
int main(void)
{
char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
