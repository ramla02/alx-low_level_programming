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
	int n = 2;
	long int i = 1, j = 2, k;

	printf("%lu, ", i);
	while (n <= 50)
	{
		if (n == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", i);
		}
		k = j;
		j += i;
		i = k;
		n++;
	}
	return (0);
}
