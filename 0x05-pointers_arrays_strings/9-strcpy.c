#include "main.h"
/**
 * _strcpy - copies the string pointed
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{

int i;

i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}
