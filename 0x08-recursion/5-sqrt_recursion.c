#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: n
*/
int _sqrt_recursion(int n);
int square(int n, int val);
{
	return (square, (n, 1));
}


/**
 * actual_sqrt_recursion - square root of a number
 * @val: number the sqaure root of
 * @n: integar.
 *
 * Return: int.
 */
int square(int n, int val);
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
