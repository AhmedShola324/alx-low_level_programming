#include "main.h"
/**
 * _islower - checks if a character is lowercase or not and return the
 * value 1 and 0 respectively
 * @c : c is type integer
 * Return: 1 for lowercase only esle return 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
