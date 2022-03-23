#include "main.h"
/**
 * _puts - prints a collection of strings
 * @str: is a pointer of type char;
 * Return: Always 0.
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
