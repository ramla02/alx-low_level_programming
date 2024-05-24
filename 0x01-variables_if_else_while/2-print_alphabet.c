#include <stdio.h>
/**
 * main - the main function is the start of the program.
 * Description: a program that prints the alphabet in lowercase.
 * Return: 0 for the successful execution.
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
