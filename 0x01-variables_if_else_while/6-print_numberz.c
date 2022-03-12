#include <stdio.h>
/**
* main - prints the alphabets in lower and  capital letters
*
*Description: This function prints the digits from 0-9 using
*their ASCII code and the putchar function
*Return: prints the digits between 0-10 followed by a new line
*/
int main(void)
{
	int i = 48;

	while (i != 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
