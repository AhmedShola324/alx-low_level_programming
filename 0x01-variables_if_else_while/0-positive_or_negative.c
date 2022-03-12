#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*more headers goes there*/

/*betty style doc for function main goes there*/
/**
* main - checks if the value of n is positive, zero or negative
* 
* Description: This function checks if a number is positive, negative or zero
* Return: One of the three outcomes positive, negative or zero is returned by
* function main
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if  (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
