#include"main.h"
/**
 * times_table - prints the 9 time table
 */
void times_table(void)
{
	int num, num1, num2;

	for (num = 0; num <= 9; num++)
	{
		_putchar(',');
		_putchar(' ');

		num3 = num * num2;

		if (num3 <= 9)
			_putchar(' ');
		else
			_putchar((num3 / 10 + '0');
			_putchar((num3 % 10) + '0');
	}
}

