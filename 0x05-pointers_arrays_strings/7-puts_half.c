#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int n;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	n = i / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
