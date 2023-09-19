#include "main.h"
/**
 * print_rev - print reversed string, following by a new line
 *
 * @s: pointer to the string to print
 *
 * return: Nothing
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
