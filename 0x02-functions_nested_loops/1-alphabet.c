#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase using _putchar
 * all the alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

