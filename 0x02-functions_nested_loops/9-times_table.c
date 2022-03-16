#include "main.h"
/**
 * times_table - prints the times-table from 0-9
 *
 * Return: 0
 */
void times_table(void)
{
	int i = 0;
	int m;
	int z;

	while (i < 10)
	{
		m = 0;
		while (m < 10)
		{
			z = i * m;

			if (z > 9)
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(z + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			m++;
		}
		i++;
		_putchar('\n');
	}
}
