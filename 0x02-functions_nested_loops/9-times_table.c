#include "main.h"
/**
 * times_table - prints the table 9 times, starting with 0.
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_puchcahr('0');

		for (mult = 1; ,ult <= 9; mult++)
		{
			_putchar(',');
			_putcahr(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
