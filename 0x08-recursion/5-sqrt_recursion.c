#include "main.h"

int _sqrt(int, int);

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to be used
*
* Return: the square root of n
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */

int _sqrt(int n, int x)
{
	int square = x * x;

	if (square > n)
		return (-1);
	if (square == n)
		return (x);
	return (_sqrt(n, x + 1));
}
