#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string .
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int str = 0;

	if (*s)
	{
		str++;
		str += _strlen_recursion(s + 1) + 1;
	}

	return (str);
}
