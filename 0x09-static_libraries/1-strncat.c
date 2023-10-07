#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int r;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	r = 0;
	while (r < n && src[r] != '\0')
	{
	dest[x] = src[r];
	x++;
	r++;
	}
	dest[x] = '\0';
	return (dest);
}
