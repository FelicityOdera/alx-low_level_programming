#include "main.h"
#include <unistd.h>
/**
 * _puts - Function that prints a string, followed by a new line
 * @str: value to be evaluate
 * Return: Nothing
 */
void _puts(char *str)
{
int l = 0;
while (*(str + l) != '\0')
{
	_putchar(str[l]);
	l++
}
_putchar('\n');
}
