#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compares pointers to two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * Return: If str1 < str2
 * If str1 == str2, 0
 * If str1 > str2,
 * the positive difference of the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, op = 0;

while (op == 0)
{
	if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		break;
	op = *(s1 + i) - *(s2 + i);
	i++;
}
return (op);
}
