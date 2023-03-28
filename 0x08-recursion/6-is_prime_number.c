#include "main.h"

int check_prime(int, int)
/**
* is_prime_number - returns true if the number is prime
* @n: the number to check
* Return: true if the number is prime
*/
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
* check_prime - checks for  prime numbers
* @n: number to be checked
* @x: number to start checking from
*
* Return: 1 if n is prime, 0 otherwise
*/

int check_prime(int n, int x)
{
	if (n <= 1)
		return (0);
	if (n % x == 0 && x > 1)
		return (0);
	if ((n / x) < x)
		return (1);
	return (check_prime(n, x + 1));
}
