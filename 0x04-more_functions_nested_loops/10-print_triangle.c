#include "main.h"
/**
 * print_triangle - prints a triangle of size
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
int a, b, k;
if (size <= 0)
	_putchar('\n');
for (a = 0; a < size; a++)
{
for (b = size - a; b > 1; b--)
	_putchar(' ');
for (k = a + b; k >= 1; k--)
	_putchar('#');
_putchar('\n');
}
}
