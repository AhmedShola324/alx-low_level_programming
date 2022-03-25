#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: string
 */
char *cap_string(char *str)
{
	int i, c, d;

	char n[] = ",;.!?(){}\n\t\" ";

	for (i = 0, d = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
		{
			d = 1;
		}
		for (c = 0; n[c] != '\0'; c++)
		{
			if (n[c] == str[i])
				d = 1;
		}
		if (d)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				d = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
			{
				d = 0;
			}
			else if (str[i] > 47 && str[i] < 58)
			{
				d = 0;
			}
		}
	}
	return (str);
}
