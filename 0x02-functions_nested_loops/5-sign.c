#include "main.h"
/**
 * print_sign - returns 1 and prints + if n is greater than zero
 * returns 0 and prints 0 if n is zero
 * returns -1 and prints - if n is less than zero
 * @n: is of type integer
 * Return: 0 1 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
