#include <stdio.h>

/**
 * Write a function that prints You're beat! and yet, you must allow,
 *\nI bore my house upon my back!\n before the main function is executed.
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
