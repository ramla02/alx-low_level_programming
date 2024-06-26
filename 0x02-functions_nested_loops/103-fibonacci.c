#include <stdio.h>
/**
 * main - is the main function and the start of the program.
 * Description: write a program that finds and prints the sum of
 * the even-valued terms, followed by a new line.
 * Return: 0 for the successful execution.
 */
int main(void)
{
	int i;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);
	return (0);
}
