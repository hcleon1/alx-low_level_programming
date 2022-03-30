#include "main.h"
/**
 * puts2 -print string, starting with the first character
 * @str: string
 *
 * Return: 0.
 */

void puts2(char *str)
{
int h;

for (h = 0; str[h] != '\0'; h++)
{
if (h % 2 == 0)
_putchar (str[h]);
}

_putchar ('\n');
}
