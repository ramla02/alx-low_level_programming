#include <stdio.h>
/**
 * main - is the mai function and the start of the program.
 * Description: Write a program that prints all single digit numbers.
 * of base 10 starting from 0, followed by a new line.
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 *  (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar twice in your code
 * All your code should be in the main function.
 * Return: 0 for the successful execution.
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
