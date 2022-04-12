#include"main.h"
/**
 * main - this is the container
 * description this is to print putchar
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
	_putchar(str[]);
	_putchar('\n');

	return (0);
}
