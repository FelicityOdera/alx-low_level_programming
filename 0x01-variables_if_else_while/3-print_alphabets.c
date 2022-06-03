#include <stdio.h>
#include <ctype.h>
/**
 * main - Emtry point
 * Description: Print the given instructions
 * Return: 0
*/
int main(void)
{
char alphabets;
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
putchar(alphabets);
}
putchar('\n');
return (0);
}
