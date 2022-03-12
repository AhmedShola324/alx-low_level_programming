#include <stdio.h>
/**
* main - prints the alphabet in lowercase
*
* Description: THis function prints the lowercase alphabets using
* the putchar function.
* Return: prints the alphabet in lowercase, followed by a newline
*/
int main(void)
{	
	int i = 97;
	while (i < 122)
	{	
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
