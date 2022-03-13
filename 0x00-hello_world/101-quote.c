#include <stdio.h>
#include <unistd.h>
/**
 * main - print a phrase without using printf and puts to the
 * standard error
 *
 * Description: This program uses write to solve this problem
 * Return: 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
