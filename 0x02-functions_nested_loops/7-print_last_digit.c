#include"main.h"
/**
 * print_last_digit - this will the last digit number
 *
 * @n - takes number input
 * Return: always lastnum
 */
int print_last_digit(int n)
{
	int lastnum;

	if (n < 0)
		lastnum = (-1) * (n % 10);
	else
		lastnum = (n % 10);
	_putchar(lastnum + '0');
	return (lastnum);
}      
