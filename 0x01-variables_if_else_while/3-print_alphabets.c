#include <stdio.h>
/**
* main - prints the alphabets in lower and  capital letters
*
*Description: This function prints the lowerand upper case characters
*using the putchar function
*Return: prints the alphabets followed by a new line
*/
int main(void)
{
	int i = 97;

	while (i != 91)
	{
		if (i == 123)
		{
			i = 65;
			putchar(i);
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
