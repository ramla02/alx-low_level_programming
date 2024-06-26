#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the main function is the start of the program.
 * Description: This program will assign a random number to the variable n,
 *  each time it is executed.
 * Return: 0 for the sucessful execution
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("and is 0\n");
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
