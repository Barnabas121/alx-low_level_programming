#include "main.h"
/**
 * print_numbers -this is from 0 -9
 * Return: this is 0
 */
void print_numbers(void)
{
	int b = 0;

	do {
		_putchar (b + 48);
		b++;
	} while (b >= 0; &&b <= 9)
	_putchar('\n');
}
