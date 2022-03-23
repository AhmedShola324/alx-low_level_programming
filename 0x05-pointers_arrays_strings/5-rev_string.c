#include "main.h"
/**
 * rev_string - Prints the reverse of a string
 * @s: Is a char type.
 */
void rev_string(char *s)
{
	char tmp;
	int leni, len, i;

	i = 0;
	len = 0;
	leni = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	leni = len - 1;

	while (i < (len / 2))
	{
		tmp = s[i];
		s[i] = s[leni];
		s[leni--] = tmp;
		i++;
	}

}
