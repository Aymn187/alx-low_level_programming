#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previsouly allocated
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer allocate new size memory or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_ptr;
	unsigned int r;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (r = 0; r < new_size; r++)
			p[r] = old_ptr[r];
	}

	if (new_size > old_size)
	{
		for (r = 0; r < old_size; r++)
			p[r] = old_ptr[r];
	}

	free(ptr);
	return (p);
}
