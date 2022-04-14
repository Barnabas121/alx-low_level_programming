#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: is the number of times the \ character
 *     should be printed
 */

void print_diagonal(int n)
{
	int fir, sec;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (fir = 1; fir <= n; ++fir)
		{
			for (sec = 1; sec <= fir; ++sec)
				_putcahr(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
