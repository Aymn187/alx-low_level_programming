#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: destnation input
 * @src: source input
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int s, x;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	x = 0;
	while (src[x] != '\0')
{
	dest[s] = src[x];
	s++;
	x++;
}

	dest[s] = '\0';
	return (dest);
}
