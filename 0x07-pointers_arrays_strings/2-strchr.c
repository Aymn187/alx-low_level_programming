#include "main.h"
/**
 * _strchr - file with a constant byts
 *
 * @s: input constant
 * @c: input constant
 * Return: 0
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
