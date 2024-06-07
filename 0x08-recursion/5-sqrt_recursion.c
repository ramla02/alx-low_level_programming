#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: number
 * Return: -1 If n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int sqrt_fun(int n, int sq);

		int sq = 1;

	return (sqrt_fun(n, sq));
}

/**
 * sqrt_fun - function to solve sqrt recursion.
 * @n: number
 * @sq: square root
 * Return: square root otherwise -1.
 */

int sqrt_fun(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_fun(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
