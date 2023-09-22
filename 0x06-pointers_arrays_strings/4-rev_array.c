#include "main.h"
/**
 * reverse_array - reverse of an array of integers
 * @a: an array of integers.
 * @n: the number of elements to swap.
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int x;
	int i;

	for (x = 0; x < n--; x++)
	{
		i = a[x];
		a[x] = a[n];
		a[n] = i;
	}
}
