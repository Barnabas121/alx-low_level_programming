#include <stdio.h>
/**
 * main - Entry point
 * desrcription: reverse a -z
 * Return: Always 0
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');
	return (0);
}
