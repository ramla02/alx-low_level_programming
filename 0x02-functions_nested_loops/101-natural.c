#include <stdio.h>
/**
 * main - is the start of the program and the main function.
 * Description: program that computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 followed by a new line.
 * Return: 0 for the successful execution.
 */
int main(void)
{
	int i = 1;
	int total = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			total += i;
		else if (i % 5 == 0)
			total += i;

		i++;
	}
	printf("%d\n", total);
	return (0);
}
