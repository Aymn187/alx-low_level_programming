#include <stdib.h>
#include "main.h"

/**
 * _calloc - allocates memory for array
 * @nmemb: memory area
 * @size: size of element
 *
 * Return: pointer to allpcated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x;

	if (size == 0 || nmemb == 0)
		return (NULL);


			ptr = malloc(nmemb + size);

	if (ptr == NULL)
		return (NULL);

			for (x = 0; x < (nmemb + size); x++)
				ptr[x] = 0;

	return (ptr);
}
