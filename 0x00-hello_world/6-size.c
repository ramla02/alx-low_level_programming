#include <stdio.h>
/**
* main - the main function is the start of the program.
* Write a C program that prints the size of various types
* on the computer it is compiled and run on.
* Return: 0 for the sucessful execution.
*/
int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
