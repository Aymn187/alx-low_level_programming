#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return:dest
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int i;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[x] = src[i];
		x++;
		i++;
	}

	dest[x] = '\0';
	return (dest);
}
