#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: pointer
 * @b: conistantvalue
 * @n: number of bytes to be changed
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}