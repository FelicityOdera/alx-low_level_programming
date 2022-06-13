#include "main.h"
#include <stdio.h>
/**
 * puts2 - Function that prints every other character of a string
 * starting with the first character
 *
 * @str: String passed
 */
void puts2(char *str)
{
int len = 0;
int l = 0;
char *y = str;
int z;

while (*y != '\0')
{
	y++;
	len++;
}
l = len - 1;
for (z = 0 ; z <= l ; z++)
{
if (z % 2 == 0)
{
	_putchar(str[z]);
}
}
_putchar('\n');
}
