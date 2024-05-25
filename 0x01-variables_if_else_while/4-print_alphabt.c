#include <stdio.h>
/**
 * main - is the main function and the start of the program.
 * description: Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Print all the letters except q and e
 * You can only use putchar twice in your code
 * Return: 0 for the successful execution.
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
putchar(c);
}
putchar('\n');
return (0);
}
