#include <unistd.h>
/**
 * _putchar -writes the character c to stdout
 * Description: the character to print is c
 * Return: 1 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
