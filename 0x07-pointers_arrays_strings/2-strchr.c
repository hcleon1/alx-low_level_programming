#include "main.h"
/**
 * _strchr - locates char string
 * @s: string to check
 * @c: char to check
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
