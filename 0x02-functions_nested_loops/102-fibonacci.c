#include <stdio.h>
/**
 * main - is the main function and the start of the program.
 * Description: Write a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space.
 * Return: 0 for the successful execution.
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
