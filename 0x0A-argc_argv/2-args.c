#include <stdio.h>
/**
 * main -  a program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 * @argc: number of argument
 * @argv: an array argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
