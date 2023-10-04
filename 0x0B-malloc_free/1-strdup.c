#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *women;
	int x, c = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	women = malloc(sizeof(char) * (x + 1));

	if (women == NULL)
		return (NULL);

	for (c = 0; str[c]; c++)
		women[c] = str[c];

	return (women);
}
