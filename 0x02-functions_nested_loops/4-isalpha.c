#include"main.h"
/**
 * _isalpha - checkif characterr is a letter both upper case or lower
 *
 * @c: takes input
 * Return: this will return 1
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c >= 90)
		return (1);
	return (0);
}
