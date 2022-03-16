#include "main.h"
/**
 * print_last_digit - prints the  last digit of a number
 * @n: is of type integer
 * Return: is of type integer.
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = -1 * (n % 10);
		_putchar(i + '0');
		return (i);
	}
	else
	{
		i = n % 10;
		_putchar(i + '0');
		return (i);
	}
}
