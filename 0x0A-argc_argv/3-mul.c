#include <stdio.h>
/**
 * main - a program that multiplies two numbers.
 * Your program should print the result of the multiplication,
 * followed by a new line
 * You can assume that the two numbers and result of the multiplication
 * can be stored in an integer
 * @argc: number of arguments
 * @argv: arguments
 * Return: Error  If the program does not receive two arguments, otherwise 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
