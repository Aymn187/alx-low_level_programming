#include "main.h"
/**
 * _strncpy - a function that copy a string
 * @dest: input buffer
 * @src: input buffer
 * @n: types of src
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
