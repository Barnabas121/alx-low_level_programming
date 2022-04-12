#inlude"main.h"
/**
 * _islower - is a function to check small letter in ASCII which is from 97 - 122
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
