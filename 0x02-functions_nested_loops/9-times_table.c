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

			if (z > 9)/*change numbers greater than 9 10 their ascii values*/
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else if (m != 0)/*space is included*/
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else/*just print the ascii value of the equation*/
			{
				_putchar(z + '0');
			}
			if (m != 9)/*comma would be added to values when m is not 9 */
			{
				_putchar(',');
				_putchar(' ');
			}
			m++;
		}
		i++;
		_putchar('\n');
	}
}
