#include <stdio.h>
/**
 * main - entry point
 * description: this is to print  0-9
 * Return: Always 0
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');
	return (0);
}
