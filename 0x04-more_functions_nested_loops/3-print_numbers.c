#include "main.h"
/**
 * print_numbers -this is from 0 -9
 * Return: this is 0
 */
void print_numbers(void)
{
	int c = 0;

	do {
		_putchar(c + 48);
		c++;
	} while (c >= 0 && c <= 9);
	_putchar('\n');
}
