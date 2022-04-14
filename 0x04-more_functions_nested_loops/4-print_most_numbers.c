#include "main.h"
/**
 * print_most_numbers -this is from 0 -9
 * Return: this is 0
 */
void print_most_numbers(void)
{
	int c = 0;

	for (c = 0; c <= 9; ++c)
	{
		if (c == 2 || c == 4)
			continue;
		_putchar(c + 48);
	}
	_putchar('\n');
}
