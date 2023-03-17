#include "main.h"
#include <stdio.h>

int _square_root(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of a number
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, 0));
}

/**
 * _square_root - recurse to find the natural
 * square root of a number using iterators
 * @n: Number to calculate the square root on
 * @i: iterator or the square root
 *
 * Return: the resulting square root
 */
int _square_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i + 1))
}
