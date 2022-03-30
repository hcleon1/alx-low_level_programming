#include "main.h"
/**
 * _strspn- length of prefix sub string
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes of s to accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[j] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
}
