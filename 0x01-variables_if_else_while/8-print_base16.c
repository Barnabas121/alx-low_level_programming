#include <stdio.h>
/**
 * main - Entry point
 * description: to print the number base 16
 * return: Always 0
 */
int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);
		if (digit ==57)
			digit +=39;
		++digit;
	}
	putchar('\n');
	return (0);
}
