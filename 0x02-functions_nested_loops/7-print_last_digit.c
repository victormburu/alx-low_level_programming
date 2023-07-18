#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 * @n: the integer to print the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
}
