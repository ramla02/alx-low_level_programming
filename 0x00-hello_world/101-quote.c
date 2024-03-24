#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
* main - the main function is the start of the program.
* You are not allowed to use any functions listed in
* the NAME section of the man (3) printf or man (3) puts
* Return: 1
*/
int main(void)
{
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str, strlen(str));
return (1);
}
