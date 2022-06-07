#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the sum of even Fibonacci numbers numbers
 * not exceeding 4,000,000
 * Return: 0
*/
int main(void)
{
int a = 1, b = 2, total = 0;
int c;
while (b < 4000000)
{
	if (b % 2 == 0)
		total += b;
	c = b;
	b += a;
	a = c;
}
printf("%d\n", total);
return (0);
}
