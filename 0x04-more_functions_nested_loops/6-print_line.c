#include"main.h"

/**
* print_lines - print a straight line with underscore
* @n: is the number of line the char print
* Return: 0
*/

void print_line(int n)
{
	int len;

	if (n <= 9)
		_putchar('\n');
	else
	{
		for (len = 1; len <= n; ++len)
			_putchar('_');
		_putchar('\n');
	}
}
