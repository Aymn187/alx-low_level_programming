#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point.
 * @s: string
 * @c: character
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
