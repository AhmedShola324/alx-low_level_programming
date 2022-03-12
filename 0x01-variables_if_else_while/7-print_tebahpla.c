#include <stdio.h>
/**
* main - prints the lowercase in reverse other
*
*Description: This function prints the lowercase characters in reverse order
*using the putchar function
*Return: prints the alphabets followed by a new line
*/
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
