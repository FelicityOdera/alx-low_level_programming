#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest
 *
 * @dest: pointer char void
 * @src: pointer char source
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int a, b = 0;
while (src[b])
	b++;
for (a = 0; a <= b; a++)
{
	dest[a] = src[a];
}
return (dest);
}
