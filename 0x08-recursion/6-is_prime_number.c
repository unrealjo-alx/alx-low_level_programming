#include "main.h"
#include <stdio.h>
/**
 * _sqrt - calculates natural square root of a number.
 * @n: a integer
 * @i: a positive integer iterator
 * Return: the natural square root of n using recursion.
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}
/**
 * is_prime_number - a function that indicates if a number
 * is a prime number,
 * @n: a integer
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	return (_sqrt(n, 0) == -1 && n > 0);
}
