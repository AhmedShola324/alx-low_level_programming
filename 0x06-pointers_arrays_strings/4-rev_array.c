#include "main.h"
/**
 * reverse_array - reverse the contents of an array
 * @a: array of integers
 * @n: number of array elements
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	while (i < (n / 2))
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
		i++;
	}
}
