#include "main.h"
/**
 * times_table- Entry point
 * Descriptiomn init parameter
 * Return:0
 *
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 0; mult <= 9; mult++)
		{
			-putchar(',');
			-putchar(' ');

			prod = num * mult;
			if (pod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
