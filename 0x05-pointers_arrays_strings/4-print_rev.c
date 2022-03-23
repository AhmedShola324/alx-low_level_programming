#include "main.h"
/**
 * print_rev - prints strings in a reverse order
 * @s: is a pointer of char type.
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	count--;
	while (s[count] >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
