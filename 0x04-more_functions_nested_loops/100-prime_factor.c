#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
int i, x = 612852475143;
for (i  = 2; i <= x; i++)
{
	if (x % i == 0)
	{
		x = x / i;
		x--;
	}
}
printf("%lu\n", i);
return (0);
}
