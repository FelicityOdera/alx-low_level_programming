#include "main.h"
#include <stdio.h>
/**
 * puts_half - Function that prints half of a string
 * @str: value to be evaluated
 */
void puts_half(char *str)
{
int len = 0;
char *x = str;
int n;

while (*y != '\0')
{
	y++;
	len++;
}
if (len % 2 == 0)
{
	n = len / 2;
}
else
{
n = (len + 1) / 2;
}
for ( ; n < len ; n++)
{
	_putchar(str[n]);
}
_putchar('\n');
}
