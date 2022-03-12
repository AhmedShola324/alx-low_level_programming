#include <stdio.h>
/**
* main - prints the alphabets in lowercase
*
*Description: This function prints the lower case characters except
*e and q using the putchar function
*Return: prints the alphabets in small letter excluding e and q
*followed by a new line
*/
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
