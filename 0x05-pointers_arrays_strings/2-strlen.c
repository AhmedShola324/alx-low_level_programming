#include "main.h"
/**
 *_strlen - Returns the lenght of a string
 *
 * @s: is a pointer of type string
 * Return: An integer value.
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
