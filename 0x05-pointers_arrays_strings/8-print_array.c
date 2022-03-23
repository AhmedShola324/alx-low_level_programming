#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of an array
 * @a: is of type int
 * @n: is of type int
 * Description: separate elements by comma and space
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
		i++;
	}
	printf("\n");
}
