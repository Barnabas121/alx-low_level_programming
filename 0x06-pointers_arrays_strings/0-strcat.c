#include "main.h"
/**
 * _strcat - this is to contcate strings
 *
 * @dest: represent destination
 * @src: represent source
 * Return: 0
 */
char *_strcat(char *dest, char *src);
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";

	_putchar("%s\n", s1);
	_putchar("%s", s2);
	_putchar(s1, s2);
	_putchar("%s", s1);
	_putchar("%s", s2);
	return (0);
}
