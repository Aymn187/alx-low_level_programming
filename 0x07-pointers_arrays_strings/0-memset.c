#include "main.h"
/**
 * _memset - fill memory with a constant
 * @s: starting address of memory
 * @b: constant v
 * @n: max bytes for use
 *
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
