#include"main.h"
/**
 * print_alphabet_x10 - to print 10 times
 *
 */
void print_alphabet_x10(void)
{
	int ten, ch;

	for (ten = 0; ten <= 9; ten++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
