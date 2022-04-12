#include"main.h"
/**
 * _islower - is a function small letter in ASCII which is from 97 - 122
 * @c: takes input
 * Return: 1 is if true
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
