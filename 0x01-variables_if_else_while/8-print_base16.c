#include <stdio.h>
/**
* main - prints the numbers of base16 in lowercase
*
*Description: This function prints the characters in base 16
*using the putchar function
*Return: prints the numbers in base 16 followed by a new line
*/
int main(void)
{
	int i = 48;

	while (i != 103)
	{
		putchar(i);
		if (i == 57)
		{
			i = 97;
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
