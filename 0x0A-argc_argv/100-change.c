#include <stdio.h>
/**
 *m main -  a program that prints the minimum number of coins to make change
 * for an amount of money.
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1,
 *  print Error, followed by a new line, and return 1
you should use atoi to parse the parameter passed to your program
* If the number passed as the argument is negative, print 0, followed
* by a new line
*You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
* @argc: number arguments
* @argv: an array arguments
* Return: 1 for error 0 for success
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);

	return (0);
}
