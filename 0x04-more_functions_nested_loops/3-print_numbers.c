#include "main.h"
/**
 * print_numbers -this is from 0 -9
 * Return: this is 0
 */
void print_numbers(void)
{
	int b;

	while (b <= 9)
	{
		_putchar (b + '0');
		b++;
	}
	_putchar ('\n');
}
