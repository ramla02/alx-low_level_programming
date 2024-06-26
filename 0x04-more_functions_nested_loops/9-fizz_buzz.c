#include <stdio.h>
/**
 * main - is the main function and the start of the program.
 * Description: a program that prints the numbers from 1 to 100, followed by
 * a new line. But for multiples of three print Fizz instead of the number and
 * for the multiples of five print Buzz. For numbers which are multiples
 * of both three and five print FizzBuzz.
 * Each number or word should be separated by a space
 * You are allowed to use the standard library
 * Return: 0 for the success
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
