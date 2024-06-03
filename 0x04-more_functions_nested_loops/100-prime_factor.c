#include <stdio.h>
#include <math.h>
/**
 * main - main Entery
 * Description: a program that finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 * You are allowed to use the standard library
 * Your program will be compiled with this command: gcc -Wall -pedantic -Werror
 * -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm
 * Return: 0 for the success
 */
int main(void)
{
	int c;
	long num = 612852475143;

	for (c = (int) sqrt(num); c > 2; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}
	return (0);
}
