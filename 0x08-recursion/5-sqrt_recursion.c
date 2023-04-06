#include "main.h"
#include <stdio.h>
/**
 * _sqrt - a function helper for _sqrt_recursion.
 * @n: a integer
 * @i: a positive integer iterator
 * Return: the natural square root of n suing recursion.
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
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: a integer
 * Return: the natural square root of n.
 * If n does not have a natural square root,
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
