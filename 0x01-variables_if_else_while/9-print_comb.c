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
	int i = 48;

	while (i != 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
