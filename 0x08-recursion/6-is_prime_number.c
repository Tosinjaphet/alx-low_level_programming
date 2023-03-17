#include "main.h"
#include <stdio.h>

int _prime_checker(int n, int i);

/**
 * is_prime_number - return positive
 * if inputs interger is a prime
 * @n: input interger to check
 *
 * Return: the resulting number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if
		return (_prime_checker(n, n - 1));
}
/**
 * _prime_checker - to calculate if a number is
 * prime recursively
 * @n: numbers to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int _prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && > 0)
		return (0);
	else
		return (_prime_checker(n, i - 1));
}
