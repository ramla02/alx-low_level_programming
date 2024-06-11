#include <stdio.h>
/**
 * main -  a program that prints the number of arguments passed into it.
 * Your program should print a number, followed by a new line
 * @argc: number of arguments
 * @argv: an array of argument
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
