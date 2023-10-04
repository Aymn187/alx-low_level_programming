#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **hola;
	int x, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	hola = malloc(sizeof(int *) * height);

	if (hola == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		hola[x] = malloc(sizeof(int) * width);

		if (hola[x] == NULL)
		{
			for (; x >= 0; x--)
				free(hola[x]);

			free(hola);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (i = 0; i < width; i++)
			hola[x][i] = 0;
	}

	return (hola);
}
