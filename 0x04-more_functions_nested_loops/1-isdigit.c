/**
 * _isdigit - entry point
 * @c: is for int
 * Return: 0
 */
int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}