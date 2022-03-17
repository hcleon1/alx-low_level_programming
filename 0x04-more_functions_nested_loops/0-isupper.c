#include "main.h"
/**
 * _isupper - Entry point
 * Description - function that checks for uppercase character
 * @c: print the character
 * Return: return 1 if c is uppercase, otherwise print 0.
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
