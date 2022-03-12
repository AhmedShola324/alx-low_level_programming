#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*more headers goes here*/

/**
* main - prints the last digit of a number
*
*Description: the function checks if the value of a random
*number is zero, greater than 5 or less than 6
*Return: Zero, greater than 5 or less than 6 and not 0
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dit = n % 10;
	if (last_dit == 0)
	{
		printf ("Last digit of %d is %d and is 0\n", n, last_dit);
	}
	else if (last_dit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dit);
	}
	return (0);
}
