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
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 65);
	return (1);
}