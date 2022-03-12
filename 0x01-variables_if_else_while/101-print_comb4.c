#include <stdio.h>
/**
* main - The most important partof the code
*
*Description: This function prints all possible different combinations of
*3 digits. Numbers must be different separated by commas and space
*Numbers must be printed in ascending order
*Return: prints all possible unique combinations followed by a new line
*/
int main(void)
{
	int n;
	int m;
	int l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{	
				if (l > m && m > n)
				{	
					putchar(n);putchar(m);
					putchar(l);
					if (n !=55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
