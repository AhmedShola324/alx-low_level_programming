#include <stdio.h>
/**
* main - prints the digits in base ten
*
*Description: This function prints fr 0-9
*Return: prints all the numbers from 0 through to ten followed by a new line
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
