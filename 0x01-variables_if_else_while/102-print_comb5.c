#include <stdio.h>
/**
 * main - entry point
 * description: that print 11 posiiible combination
 * Return: Always 0
 */
int main(void)
{
	int firstNum = 0, secNum;

	while (firstNum <= 99)
	{
		secNum = 0;
		while (secNum <= 99)
		{
			if (firstNum != secNum)
			{
				putchar((firstNum / 10) + 48);
				putchar((firstNum % 10) + 48);
				putchar(' ');
				putchar((secNum / 10) + 48);
				putchar((secNum % 10) + 48);
				if (firstNum != 98 || secNum != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++secNum;
		}
		++firstNum;
	}
	putchar('\n');
	return (0);
}
