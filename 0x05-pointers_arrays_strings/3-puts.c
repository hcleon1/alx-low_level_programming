#include "main.h"
/**
 * _puts -print string
 * @str: pointer to int
 *
 * Return: void
 */
void _puts(char *str)
{
char *c;
int h;

c = str;

for (h = 0; c[h]; h++)
{
_putchar(c[h]);
}
_putchar('\n');
}
