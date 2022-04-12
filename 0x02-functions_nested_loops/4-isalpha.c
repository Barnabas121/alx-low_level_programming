#include"main.h"
/**
 * _isalpha - this function only print letter wether it is upper or lower case
 *
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 & c >= 90)
		return (1);
	return (0);
}
