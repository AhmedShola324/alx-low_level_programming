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
	int e = 48;

		while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;			
		}
		e++;
	}
	putchar('\n');
	return (0);
}
