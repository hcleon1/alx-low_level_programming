#include "main.h"
/**
 * _isdigit - Entry point
 * Description - function that checks for a digit (0 through 9)
 * @c: The character to print
 *
 * Return: return 1 if c is a digit, otherwise print 0.
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
