#include <stdio.h>
/**
 * main - a program that adds positive numbers.
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * You can assume that numbers and the addition of all the numbers can
 * be stored in an int
 * Return: Error If one of the number contains symbols that are not digits
 * otherwise return 1
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);

	}
	printf("%d\n", sum);

	return (0);
}
