#include <stdio.h>
/**
 * main - is the main function and the start of the program.
 * Description: Write a program that prints all single digit numbers
 *  of base 10 starting from 0, followed by a new line.
 * Return: 0 for the successful execution.
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
