#include "main.h"

/**
 * _strlen - string length function
 * @s: length of string character
 * Return: Always 0.
 */

int _strlen(char *s)
{
int i = 0;

while (s[i] != 0)
{
	i++;
}
	return (i);
}
