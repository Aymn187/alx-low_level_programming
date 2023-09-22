#include "main.h"
/**
 * _strncat - a function that concatenates two strings .
 * @dest: pointer to input
 * @src: pointer to input
 * @n: input value
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int s, x;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
	dest[s] = src[x];
	s++;
	x++;
	}
	dest[s] = '\0';
	return (dest);
}
