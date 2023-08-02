#include "main.h"
/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n: input value
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: input value
 * @a: itarator
 * Return: the squarre root
 */
int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (actual_sqrt_recursion(n, a + 1));
}
