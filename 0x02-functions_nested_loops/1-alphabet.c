#include"main.h"
/**
 * print - alphabet utilize on the _putchar function to print
 * the alphabet a - z
 * print_alphabet: to print a-z
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
