#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
* main - print string
*
* Return: 1 (Success)
**/
int main(void)
{
int byte = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19");

write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", byte);
	return (1);
}
