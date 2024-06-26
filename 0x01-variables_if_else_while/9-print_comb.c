#include <stdio.h>
/**
 * main - is the main function and the start of the program.
 * Description: Write a program that prints all possible combinations
 * of single-digit numbers.
 * Numbers must be separated by ,, followed by a space.
 * Numbers should be printed in ascending order
 * You can only use the putchar function (every other
 * function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char.
 * Return: 0 for the successful execution.
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
