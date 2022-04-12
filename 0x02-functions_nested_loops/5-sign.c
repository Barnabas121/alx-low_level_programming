#include"main.h"
/**
 * print_sign - print if n is positive, negative and zero
 * @n: takes integer type input for function
 * Return: 1 if sucess
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
			return (1);
	}
	if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
