#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *n)

{
	int x;

	x = 0;
	while (n[x] != '\0')
	{
		if (n[x] >= 'a' && n[x] <= 'z')
			n[x] = n[x] - 10;
		x++;
	}
	return (n);
}

